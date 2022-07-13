//
// Created by 于明明 on 2022/7/11.
//

#ifndef GLIB_LITE_GLIB_TEST_H
#define GLIB_LITE_GLIB_TEST_H

#define g_test_add_func(desc, fun) fun()
#undef g_assert

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstring-compare"

#include <assert.h>
#define g_assert assert
#define g_assert_cmpint(x, ind, y) assert(x ind y)
#define g_assert_cmpstr(x, ind, y) if ((x) != NULL) assert(strcmp(x, y) == 0)
#define g_assert_cmpfloat(x, ind, y) assert(x ind y)
#define g_assert_cmpmem(x, l1, y, l2) assert((l1) == (l2) && memcmp(x, y, l1) == 0)

#define g_assert_cmpuint g_assert_cmpint

#define g_strcmp0 strcmp
#define g_test_bug(x)
#define g_assert_nonnull(x) assert((x) != NULL)

#define g_assert_error(err, dom, c) assert(!(!err || (err)->domain != dom || (err)->code != c))
#define g_assert_no_error(e) assert(e == NULL)
#define g_assert_null(x) assert (x == NULL)

#endif //GLIB_LITE_GLIB_TEST_H
