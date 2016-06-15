AUTOMAKE_OPTIONS	= subdir-objects
AM_CPPFLAGS		= -I$(top_builddir)/include -I$(top_builddir)/include/schacct

SUBDIRS			= libschacct

bin_PROGRAMS		= test
test_LDADD		= libschacct/.libs/libschacct.so
test_SOURCES		= test.cpp
