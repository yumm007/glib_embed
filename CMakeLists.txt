cmake_minimum_required(VERSION 3.20)

PROJECT(glib_lite)

INCLUDE_DIRECTORIES(./
    glib/
    )

ADD_LIBRARY(glib_lite STATIC
    glib/glibconfig.h glib/gtypes.h glib/gversionmacros.h
    glib/glist.c glib/glist.h
    glib/gslist.c glib/gslist.h
    glib/gslice.c glib/gslice.h
    glib/gmem.c glib/gmem.h
    glib/gnode.c glib/gnode.h
    glib/gthread.c glib/gthread.h
    glib/gstrfuncs.c glib/gstrfuncs.h
    glib/gatomic.c glib/gatomic.h
    glib/gprintf.c glib/gprintf.h glib/gprintfint.h
    glib/gnulib/printf.c glib/gnulib/printf.h
    glib/gnulib/vasnprintf.c glib/gnulib/vasnprintf.h
    glib/gnulib/printf-args.c glib/gnulib/printf-args.h
    glib/gnulib/printf-parse.c glib/gnulib/printf-parse.h

    #glib/ghash.c glib/ghash.h

    #glib/gqueue.c glib/gqueue.h
    #glib/gstring.c glib/gstring.h
    #glib/gstrfuncs.c glib/gstrfuncs.h
    #glib/gstringchunk.c glib/gstringchunk.h

    #glib/gasyncqueue.c glib/gasyncqueue.h
    #glib/goption.c glib/goption.h
    #glib/gkeyfile.c glib/gkeyfile.h
    #glib/gfileutils.c glib/gfileutils.h
    glib/config.h)

TARGET_COMPILE_DEFINITIONS(glib_lite PRIVATE __GLIB_H_INSIDE__)

add_executable(glib_test test/test_main.c test/list.c test/glist_test.c)
target_link_libraries(glib_test glib_lite)