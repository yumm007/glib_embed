//
// Created by 于明明 on 2022/7/11.
//

#ifndef GLIB_LITE_GLIB_TEST_H
#define GLIB_LITE_GLIB_TEST_H

#define g_test_add_func(desc, fun) fun()
#undef g_assert

#include <assert.h>
#define g_assert assert
#define g_assert_cmpint(x, ind, y) assert(x ind y)
#define g_assert_cmpstr(x, ind, y) assert(strcmp(x, y) == 0)

#define g_assert_cmpmem(x, l1, y, l2) assert(l1 == l2 && memcmp(x, y, l1) == 0)

#define g_assert_cmpuint g_assert_cmpint
#define g_assert_not_reached(...) *(char *)0 = 1

#define g_strcmp0 strcmp

#endif //GLIB_LITE_GLIB_TEST_H
