//
// Created by 于明明 on 2022/7/3.
//

#ifndef GLIB_LITE_V2_CONFIG_H
#define GLIB_LITE_V2_CONFIG_H

#define G_BEGIN_DECLS
#define G_END_DECLS
#define GLIB_STATIC_COMPILATION
#define HAVE_COMPLIANT_POSIX_MEMALIGN 1

//#define GLIB_AVAILABLE_IN_ALL extern
#define GLIB_LITE

#define TRACE(...)
#define g_error(...)
#define g_warning(...)
#define g_return_if_fail(...)
#define g_return_val_if_fail(...)
#define g_assert(...)


#endif //GLIB_LITE_V2_CONFIG_H
