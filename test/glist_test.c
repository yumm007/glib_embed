//
// Created by 于明明 on 2021/11/10.
//

#include "glib.h"
#include <string.h>
#include <stdlib.h>
#include <assert.h>

static void glist_test_3(void) {
    GList *l = NULL;

    l = g_list_append(l, strdup("1"));
    l = g_list_append(l, strdup("2"));

    GList *l1 = g_list_find_custom(l, "1", (void *)strcmp);
    assert(strcmp(l1->data, "1") == 0);

    l1 = g_list_find_custom(l, "111", (void *)strcmp);
    assert(l1 == NULL);

    g_list_free_full(l, free);

}

static void glist_test_2(void) {
    GList *l = NULL;

    l = g_list_append(l, strdup("1"));
    l = g_list_append(l, strdup("2"));

    g_list_free_full(l, free);

}

static void glist_test_1(void) {
    GList *l = NULL;

    l = g_list_append(l, "1");
    l = g_list_append(l, "2");

    g_list_free(l);

}

int glist_test_main(void) {

    glist_test_1();
    glist_test_2();
    glist_test_3();

    return 0;
}