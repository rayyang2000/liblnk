if HAVE_LOCAL_LIBFOLE
AM_CPPFLAGS = \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/common \
	@LIBCSTRING_CPPFLAGS@ \
	@LIBCERROR_CPPFLAGS@ \
	@LIBCNOTIFY_CPPFLAGS@ \
	@LIBUNA_CPPFLAGS@ \
	@LIBFDATETIME_CPPFLAGS@ \
	@LIBFGUID_CPPFLAGS@

noinst_LTLIBRARIES = libfole.la

libfole_la_SOURCES = \
	libfole_definitions.h \
	libfole_value_type.c libfole_value_type.h \
	libfole_types.h
endif

distclean: clean
	/bin/rm -f Makefile

splint:
	@echo "Running splint on libfole ..."
	-splint -preproc -redef $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(libfole_la_SOURCES)

