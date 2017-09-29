AUTOMAKE_OPTIONS = foreign
SUBDIRS = lib . tests

AM_CFLAGS = --pedantic -Wall -std=c99 -O2 -I$(top_srcdir)/include
AM_LDFLAGS = -L$(top_srcdir)/lib

bin_PROGRAMS = t
t_SOURCES = main.c
t_LDADD = $(top_srcdir)/lib/libcalculate.a
