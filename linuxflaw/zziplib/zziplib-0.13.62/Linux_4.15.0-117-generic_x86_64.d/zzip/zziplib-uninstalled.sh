# generated by configure / remove this line to disable regeneration
prefix="/usr/local"
exec_prefix="${prefix}"
bindir="${exec_prefix}/bin"
libdir="/home/acesrc/testcase/linuxflaw/zziplib/zziplib-0.13.62/Linux_4.15.0-117-generic_x86_64.d/zzip/.libs"
datarootdir="${prefix}/share"
datadir="${datarootdir}"
sysconfdir="${prefix}/etc"
includedir="/home/acesrc/testcase/linuxflaw/zziplib/zziplib-0.13.62/Linux_4.15.0-117-generic_x86_64.d/.."
package="zziplib"
suffix=""

for option; do case "$option" in --list-all|--name) echo  "zziplib"
;; --help) pkg-config --help ; echo Buildscript Of "ZZipLib - libZ-based ZIP-access Library with an Easy-to-Use API"
;; --modversion|--version) echo "0.13.62"
;; --requires) echo pkg-config zzip-zlib-config "zzip-zlib-config"
;; --libs) echo -L${libdir} "" "-lzzip"
       pkg-config zzip-zlib-config
;; --cflags) echo -I${includedir} ""
       pkg-config zzip-zlib-config
;; --variable=*) eval echo '$'`echo $option | sed -e 's/.*=//'`
;; --uninstalled) exit 0 
;; *) ;; esac done
