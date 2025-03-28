/* NOTE - eventually this file will be automatically updated using a Perl script that understand
 * the naming of test case files, functions, and namespaces.
 */

#include <time.h>   /* for time() */
#include <stdlib.h> /* for srand() */

#include "std_testcase.h"
#include "testcases.h"

int main(int argc, char * argv[]) {

	/* seed randomness */

	srand( (unsigned)time(NULL) );

	globalArgc = argc;
	globalArgv = argv;

#ifndef OMITGOOD

	/* Calling C good functions */
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE511_Logic_Time_Bomb__time_02_good();");
	CWE511_Logic_Time_Bomb__time_02_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_05_good();");
	CWE511_Logic_Time_Bomb__time_05_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_02_good();");
	CWE511_Logic_Time_Bomb__rand_02_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_15_good();");
	CWE511_Logic_Time_Bomb__time_15_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_17_good();");
	CWE511_Logic_Time_Bomb__rand_17_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_17_good();");
	CWE511_Logic_Time_Bomb__time_17_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_03_good();");
	CWE511_Logic_Time_Bomb__time_03_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_13_good();");
	CWE511_Logic_Time_Bomb__rand_13_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_02_good();");
	CWE511_Logic_Time_Bomb__counter_02_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_04_good();");
	CWE511_Logic_Time_Bomb__time_04_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_16_good();");
	CWE511_Logic_Time_Bomb__counter_16_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_07_good();");
	CWE511_Logic_Time_Bomb__rand_07_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_09_good();");
	CWE511_Logic_Time_Bomb__counter_09_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_11_good();");
	CWE511_Logic_Time_Bomb__time_11_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_09_good();");
	CWE511_Logic_Time_Bomb__rand_09_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_09_good();");
	CWE511_Logic_Time_Bomb__time_09_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_01_good();");
	CWE511_Logic_Time_Bomb__counter_01_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_10_good();");
	CWE511_Logic_Time_Bomb__rand_10_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_04_good();");
	CWE511_Logic_Time_Bomb__counter_04_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_08_good();");
	CWE511_Logic_Time_Bomb__rand_08_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_04_good();");
	CWE511_Logic_Time_Bomb__rand_04_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_05_good();");
	CWE511_Logic_Time_Bomb__counter_05_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_06_good();");
	CWE511_Logic_Time_Bomb__rand_06_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_10_good();");
	CWE511_Logic_Time_Bomb__counter_10_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_12_good();");
	CWE511_Logic_Time_Bomb__counter_12_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_13_good();");
	CWE511_Logic_Time_Bomb__counter_13_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_12_good();");
	CWE511_Logic_Time_Bomb__rand_12_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_15_good();");
	CWE511_Logic_Time_Bomb__rand_15_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_08_good();");
	CWE511_Logic_Time_Bomb__time_08_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_07_good();");
	CWE511_Logic_Time_Bomb__time_07_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_15_good();");
	CWE511_Logic_Time_Bomb__counter_15_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_06_good();");
	CWE511_Logic_Time_Bomb__counter_06_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_01_good();");
	CWE511_Logic_Time_Bomb__time_01_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_11_good();");
	CWE511_Logic_Time_Bomb__counter_11_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_18_good();");
	CWE511_Logic_Time_Bomb__time_18_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_08_good();");
	CWE511_Logic_Time_Bomb__counter_08_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_01_good();");
	CWE511_Logic_Time_Bomb__rand_01_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_10_good();");
	CWE511_Logic_Time_Bomb__time_10_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_16_good();");
	CWE511_Logic_Time_Bomb__time_16_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_05_good();");
	CWE511_Logic_Time_Bomb__rand_05_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_06_good();");
	CWE511_Logic_Time_Bomb__time_06_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_14_good();");
	CWE511_Logic_Time_Bomb__rand_14_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_07_good();");
	CWE511_Logic_Time_Bomb__counter_07_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_14_good();");
	CWE511_Logic_Time_Bomb__counter_14_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_18_good();");
	CWE511_Logic_Time_Bomb__rand_18_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_11_good();");
	CWE511_Logic_Time_Bomb__rand_11_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_18_good();");
	CWE511_Logic_Time_Bomb__counter_18_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_03_good();");
	CWE511_Logic_Time_Bomb__counter_03_good();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_17_good();");
	CWE511_Logic_Time_Bomb__counter_17_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_13_good();");
	CWE511_Logic_Time_Bomb__time_13_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_14_good();");
	CWE511_Logic_Time_Bomb__time_14_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_03_good();");
	CWE511_Logic_Time_Bomb__rand_03_good();

	printLine("Calling CWE511_Logic_Time_Bomb__time_12_good();");
	CWE511_Logic_Time_Bomb__time_12_good();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_16_good();");
	CWE511_Logic_Time_Bomb__rand_16_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */





#ifdef __cplusplus
	/* Calling C++ good functions */
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

#endif /* __cplusplus */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE511_Logic_Time_Bomb__time_02_bad();");
	CWE511_Logic_Time_Bomb__time_02_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_05_bad();");
	CWE511_Logic_Time_Bomb__time_05_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_02_bad();");
	CWE511_Logic_Time_Bomb__rand_02_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_15_bad();");
	CWE511_Logic_Time_Bomb__time_15_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_17_bad();");
	CWE511_Logic_Time_Bomb__rand_17_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_17_bad();");
	CWE511_Logic_Time_Bomb__time_17_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_03_bad();");
	CWE511_Logic_Time_Bomb__time_03_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_13_bad();");
	CWE511_Logic_Time_Bomb__rand_13_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_02_bad();");
	CWE511_Logic_Time_Bomb__counter_02_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_04_bad();");
	CWE511_Logic_Time_Bomb__time_04_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_16_bad();");
	CWE511_Logic_Time_Bomb__counter_16_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_07_bad();");
	CWE511_Logic_Time_Bomb__rand_07_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_09_bad();");
	CWE511_Logic_Time_Bomb__counter_09_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_11_bad();");
	CWE511_Logic_Time_Bomb__time_11_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_09_bad();");
	CWE511_Logic_Time_Bomb__rand_09_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_09_bad();");
	CWE511_Logic_Time_Bomb__time_09_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_01_bad();");
	CWE511_Logic_Time_Bomb__counter_01_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_10_bad();");
	CWE511_Logic_Time_Bomb__rand_10_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_04_bad();");
	CWE511_Logic_Time_Bomb__counter_04_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_08_bad();");
	CWE511_Logic_Time_Bomb__rand_08_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_04_bad();");
	CWE511_Logic_Time_Bomb__rand_04_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_05_bad();");
	CWE511_Logic_Time_Bomb__counter_05_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_06_bad();");
	CWE511_Logic_Time_Bomb__rand_06_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_10_bad();");
	CWE511_Logic_Time_Bomb__counter_10_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_12_bad();");
	CWE511_Logic_Time_Bomb__counter_12_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_13_bad();");
	CWE511_Logic_Time_Bomb__counter_13_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_12_bad();");
	CWE511_Logic_Time_Bomb__rand_12_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_15_bad();");
	CWE511_Logic_Time_Bomb__rand_15_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_08_bad();");
	CWE511_Logic_Time_Bomb__time_08_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_07_bad();");
	CWE511_Logic_Time_Bomb__time_07_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_15_bad();");
	CWE511_Logic_Time_Bomb__counter_15_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_06_bad();");
	CWE511_Logic_Time_Bomb__counter_06_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_01_bad();");
	CWE511_Logic_Time_Bomb__time_01_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_11_bad();");
	CWE511_Logic_Time_Bomb__counter_11_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_18_bad();");
	CWE511_Logic_Time_Bomb__time_18_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_08_bad();");
	CWE511_Logic_Time_Bomb__counter_08_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_01_bad();");
	CWE511_Logic_Time_Bomb__rand_01_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_10_bad();");
	CWE511_Logic_Time_Bomb__time_10_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_16_bad();");
	CWE511_Logic_Time_Bomb__time_16_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_05_bad();");
	CWE511_Logic_Time_Bomb__rand_05_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_06_bad();");
	CWE511_Logic_Time_Bomb__time_06_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_14_bad();");
	CWE511_Logic_Time_Bomb__rand_14_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_07_bad();");
	CWE511_Logic_Time_Bomb__counter_07_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_14_bad();");
	CWE511_Logic_Time_Bomb__counter_14_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_18_bad();");
	CWE511_Logic_Time_Bomb__rand_18_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_11_bad();");
	CWE511_Logic_Time_Bomb__rand_11_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_18_bad();");
	CWE511_Logic_Time_Bomb__counter_18_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_03_bad();");
	CWE511_Logic_Time_Bomb__counter_03_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__counter_17_bad();");
	CWE511_Logic_Time_Bomb__counter_17_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_13_bad();");
	CWE511_Logic_Time_Bomb__time_13_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_14_bad();");
	CWE511_Logic_Time_Bomb__time_14_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_03_bad();");
	CWE511_Logic_Time_Bomb__rand_03_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__time_12_bad();");
	CWE511_Logic_Time_Bomb__time_12_bad();

	printLine("Calling CWE511_Logic_Time_Bomb__rand_16_bad();");
	CWE511_Logic_Time_Bomb__rand_16_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
