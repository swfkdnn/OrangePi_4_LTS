#ifndef _LINUX_CONST_H
#define _LINUX_CONST_H

/* sw[]20230215  */
/* #include <vdso/const.h>   */
#include "/home/sw/OrangePi_4_LTS/orangepi-build/kernel/orange-pi-5.18/debian/hdrtmp/usr/src/linux-headers-5.18.5-rk3399/include/vdso/const.h"

/*
 * This returns a constant expression while determining if an argument is
 * a constant expression, most importantly without evaluating the argument.
 * Glory to Martin Uecker <Martin.Uecker@med.uni-goettingen.de>
 */
#define __is_constexpr(x) \
	(sizeof(int) == sizeof(*(8 ? ((void *)((long)(x) * 0l)) : (int *)8)))

#endif /* _LINUX_CONST_H */
