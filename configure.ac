AC_PREREQ([2.69])

AC_INIT([schacct],[0.1],[someone@example.com],[schacct],[https://github.com/dajamu/schacct])

AC_CONFIG_AUX_DIR(config)

#
# Example header checks
#

#AC_CHECK_HEADERS(unistd.h semaphore.h sys/loadavg.h sys/time.h)
#AC_CHECK_HEADERS(curl/curl.h)
#AC_CHECK_HEADER(curl/curl.h,,[AC_MSG_ERROR([Couldn't find curl.h... please install.])])

AC_CONFIG_HEADERS([src/config.h])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([1.11 no-define])

AC_PROG_CXX
AC_LANG_PUSH([C++])
AX_CXX_COMPILE_STDCXX_11(ext,mandatory)

AC_CONFIG_FILES([
	Makefile
	src/Makefile
	src/libschacct/Makefile
])

LT_INIT([disable-static])
AC_OUTPUT

