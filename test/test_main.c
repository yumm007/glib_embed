//
// Created by 于明明 on 2021/11/9.
//

#include <glib.h>

extern int glist_test_main(void);
extern int glist_test_main_bak(void);
extern void ghash_test_main (void);
extern void glib_string_test(void);
extern void asyncqueue_test_main (void);
extern void glib_option_test_main (void);

int main(void) {

    g_quark_init();

    glist_test_main();
    glist_test_main_bak();
    ghash_test_main();
    glib_string_test();
    asyncqueue_test_main();

    glib_option_test_main();
    return 0;
}