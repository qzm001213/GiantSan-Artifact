//===- afl_driver.cpp - a glue between AFL and libFuzzer --------*- C++ -* ===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//===----------------------------------------------------------------------===//

/* This file allows to fuzz libFuzzer-style target functions
 (LLVMFuzzerTestOneInput) with AFL using AFL's persistent (in-process) mode.

Usage:
################################################################################
cat << EOF > test_fuzzer.cc
#include <stddef.h>
#include <stdint.h>
extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  if (size > 0 && data[0] == 'H')
    if (size > 1 && data[1] == 'I')
       if (size > 2 && data[2] == '!')
       __builtin_trap();
  return 0;
}
EOF
# Build your target with -fsanitize-coverage=trace-pc-guard using fresh clang.
clang -g -fsanitize-coverage=trace-pc-guard test_fuzzer.cc -c
# Build afl-llvm-rt.o.c from the AFL distribution.
clang -c -w $AFL_HOME/llvm_mode/afl-llvm-rt.o.c
# Build this file, link it with afl-llvm-rt.o.o and the target code.
clang++ afl_driver.cpp test_fuzzer.o afl-llvm-rt.o.o
# Run AFL:
rm -rf IN OUT; mkdir IN OUT; echo z > IN/z;
$AFL_HOME/afl-fuzz -i IN -o OUT ./a.out
################################################################################
AFL_DRIVER_STDERR_DUPLICATE_FILENAME: Setting this *appends* stderr to the file
specified. If the file does not exist, it is created. This is useful for getting
stack traces (when using ASAN for example) or original error messages on hard
to reproduce bugs. Note that any content written to stderr will be written to
this file instead of stderr's usual location.

AFL_DRIVER_CLOSE_FD_MASK: Similar to libFuzzer's -close_fd_mask behavior option.
If 1, close stdout at startup. If 2 close stderr; if 3 close both.

*/
#include <assert.h>
#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <fstream>
#include <iostream>
#include <vector>

// libFuzzer interface is thin, so we don't include any libFuzzer headers.
extern "C" {
__attribute__((weak)) int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size);
__attribute__((weak)) int LLVMFuzzerInitialize(int *argc, char ***argv);
}

// Notify AFL about persistent mode.
static volatile char AFL_PERSISTENT[] = "##SIG_AFL_PERSISTENT##";
// extern "C" int __afl_persistent_loop(unsigned int);
static volatile char suppress_warning = AFL_PERSISTENT[0];

// Input buffer.
static const size_t kMaxAflInputSize = 1 << 20;
static uint8_t AflInputBuf[kMaxAflInputSize];

// Keep track of where stderr content is being written to, so that
// dup_and_close_stderr can use the correct one.
static FILE *output_file = stderr;

// If the user asks us to duplicate stderr, then do it.
static void maybe_duplicate_stderr() {
  char *stderr_duplicate_filename =
      getenv("AFL_DRIVER_STDERR_DUPLICATE_FILENAME");

  if (!stderr_duplicate_filename)
    return;

  FILE *stderr_duplicate_stream =
      freopen(stderr_duplicate_filename, "a+", stderr);

  if (!stderr_duplicate_stream) {
    fprintf(
        stderr,
        "Failed to duplicate stderr to AFL_DRIVER_STDERR_DUPLICATE_FILENAME");
    abort();
  }
  output_file = stderr_duplicate_stream;
}

// Most of these I/O functions were inspired by/copied from libFuzzer's code.
static void discard_output(int fd) {
  FILE *temp = fopen("/dev/null", "w");
  if (!temp)
    abort();
  dup2(fileno(temp), fd);
  fclose(temp);
}

static void close_stdout() { discard_output(STDOUT_FILENO); }

// Prevent the targeted code from writing to "stderr" but allow sanitizers and
// this driver to do so.
static void dup_and_close_stderr() {
  int output_fileno = fileno(output_file);
  int output_fd = dup(output_fileno);
  if (output_fd <= 0)
    abort();
  FILE *new_output_file = fdopen(output_fd, "w");
  if (!new_output_file)
    abort();
  discard_output(output_fileno);
}

/*static void Printf(const char *Fmt, ...) {
  va_list ap;
  va_start(ap, Fmt);
  vfprintf(output_file, Fmt, ap);
  va_end(ap);
  fflush(output_file);
}*/

// Close stdout and/or stderr if user asks for it.
static void maybe_close_fd_mask() {
  char *fd_mask_str = getenv("AFL_DRIVER_CLOSE_FD_MASK");
  if (!fd_mask_str)
    return;
  int fd_mask = atoi(fd_mask_str);
  if (fd_mask & 2)
    dup_and_close_stderr();
  if (fd_mask & 1)
    close_stdout();
}

// Define LLVMFuzzerMutate to avoid link failures for targets that use it
// with libFuzzer's LLVMFuzzerCustomMutator.
extern "C" size_t LLVMFuzzerMutate(uint8_t *Data, size_t Size, size_t MaxSize) {
  assert(false && "LLVMFuzzerMutate should not be called from afl_driver");
  return 0;
}

extern "C" __attribute__((weak))
int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size)
{
  assert(false && "LLVMFuzzerTestOneInput should not be implemented in afl_driver");
  return 0;
}

// Execute any files provided as parameters.
static int ExecuteFilesOnyByOne(int argc, char **argv) {
  for (int i = 1; i < argc; i++) {
    std::ifstream in(argv[i], std::ios::binary);
    in.seekg(0, in.end);
    size_t length = in.tellg();
    in.seekg (0, in.beg);
    if (length < 0 || length > kMaxAflInputSize) {
      continue;
    }
    // Allocate exactly length bytes so that we reliably catch buffer overflows.
    std::vector<char> bytes(length);
    in.read(bytes.data(), bytes.size());
    assert(in);
    LLVMFuzzerTestOneInput(reinterpret_cast<const uint8_t *>(bytes.data()),
                           bytes.size());
  }
  return 0;
}

__attribute__((weak))
int main(int argc, char **argv) {
  maybe_duplicate_stderr();
  maybe_close_fd_mask();
  if (LLVMFuzzerInitialize)
    LLVMFuzzerInitialize(&argc, &argv);
  // Do any other expensive one-time initialization here.

  int N = 1000;
  if (argc > 1)
    return ExecuteFilesOnyByOne(argc, argv);

  assert(N > 0);

  // Call LLVMFuzzerTestOneInput here so that coverage caused by initialization
  // on the first execution of LLVMFuzzerTestOneInput is ignored.
  uint8_t dummy_input[1] = {0};
  LLVMFuzzerTestOneInput(dummy_input, 1);

  int num_runs = 0;
  //while (__afl_persistent_loop(N)) {
    ssize_t n_read = read(0, AflInputBuf, kMaxAflInputSize);
    if (n_read > 0) {
      // Copy AflInputBuf into a separate buffer to let asan find buffer
      // overflows. Don't use unique_ptr/etc to avoid extra dependencies.
      uint8_t *copy = new uint8_t[n_read];
      memcpy(copy, AflInputBuf, n_read);
      num_runs++;
      LLVMFuzzerTestOneInput(copy, n_read);
      delete[] copy;
    }
  //}
}
