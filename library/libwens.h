#ifndef __libwens__h__
#define __libwens__h__

#include "mathematics.h"

/****************************************************************************
 *
 *	 useful macros and short methods
 ****************************************************************************/
//align macro to alignmen strtuct/class or ptr
#define ngx_align(d, a)     (((d) + (a - 1)) & ~(a - 1))
#define ngx_align_ptr(p, a)                                                   \
    (u_char *) (((uintptr_t) (p) + ((uintptr_t) a - 1)) & ~((uintptr_t) a - 1))


#endif