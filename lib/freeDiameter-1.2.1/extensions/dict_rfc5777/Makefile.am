## Process this file with automake to produce Makefile.in

extlib_LTLIBRARIES = dict_rfc5777.la

dict_rfc5777_la_SOURCES = \
	dict_rfc5777.c

dict_rfc5777_la_DEPENDENCIES = \
    $(top_srcdir)/libfdcore/libfdcore.la \
    $(top_srcdir)/libfdproto/libfdproto.la \
	$(NULL)

dict_rfc5777_la_LIBADD = \
    $(top_srcdir)/libfdcore/libfdcore.la \
    $(top_srcdir)/libfdproto/libfdproto.la \
	$(NULL)

AM_LDFLAGS = \
	-module -avoid-version -shared \
	$(NULL)

AM_CPPFLAGS = \
	-I$(top_srcdir)/include \
	$(NULL)

AM_CFLAGS = \
	-Wall -Werror \
	$(NULL)
