TESTS = test_calculate

check_PROGRAMS = test_calculate
test_calculate_SOURCES = test_calculate.c
test_calculate_CFLAGS = $(AM_CFLAGS) -I$(top_srcdir)/fff -I$(top_srcdir)/include
test_calculate_LDADD = libtest_calculate.a -lcheck

libtest_calculate.a:
	objcopy --weaken $(top_srcdir)/lib/libcalculate.a $@

CLEANFILES = libtest_calculate.a
