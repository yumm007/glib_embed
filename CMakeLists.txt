cmake_minimum_required(VERSION 3.20)

PROJECT(glib_lite)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-int-conversion")


INCLUDE_DIRECTORIES(./
    glib/
    )

ADD_LIBRARY(glib_embed STATIC
    glib/glibconfig.h glib/gtypes.h glib/gversionmacros.h
    glib/gslice.c glib/gslice.h
    glib/glist.c glib/glist.h
    glib/gslist.c glib/gslist.h
    glib/gmem.c glib/gmem.h
    glib/gnode.c glib/gnode.h
    glib/gthread.c glib/gthread.h
    glib/gstrfuncs.c glib/gstrfuncs.h
    glib/gstringchunk.c glib/gstringchunk.h
    glib/gatomic.c glib/gatomic.h
    glib/gprintf.c glib/gprintf.h glib/gprintfint.h
    glib/gnulib/printf.c glib/gnulib/printf.h
    glib/gnulib/vasnprintf.c glib/gnulib/vasnprintf.h
    glib/gnulib/printf-args.c glib/gnulib/printf-args.h
    glib/gnulib/printf-parse.c glib/gnulib/printf-parse.h

    glib/ghash.c glib/ghash.h
    glib/gstring.c glib/gstring.h
    glib/gbytes.c glib/gbytes.h
    glib/garray.c glib/garray.h
    glib/gqsort.c glib/gqsort.h

    glib/gqueue.c glib/gqueue.h
    glib/gasyncqueue.c glib/gasyncqueue.h
    glib/gtimer.c glib/gtimer.h
    glib/gthread.c glib/gthread.h glib/gthread-posix.c
    glib/deprecated/gthread.h glib/deprecated/gthread-deprecated.c

    glib/gquark.c glib/gquark.h
    glib/gerror.c glib/gerror.h
    glib/goption.c glib/goption.h
    glib/gkeyfile.c glib/gkeyfile.h
    glib/gfileutils.c glib/gfileutils.h
    glib/gstdio.c glib/gstdio.h
    glib/gutf8.c glib/gunicode.h
    glib/gutils.c glib/gutils.h
    glib/genviron.c glib/genviron.h
    glib/gunichartables.h glib/gmirroringtable.h
    glib/gscripttable.h glib/gunicodeprivate.h
    glib/guniprop.c glib/gunicomp.h
    glib/gunidecomp.c glib/gunidecomp.h

    glib/config.h)

add_executable(glib_test test/test_main.c
    test/glist_test_from_glib.c
    test/glist_test.c
    test/glib_test.h
    test/hash.c
    test/string.c
    test/asyncqueue.c
    test/option-context.c
    test/keyfile.c
    )

target_link_libraries(glib_test glib_embed)