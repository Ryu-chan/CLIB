/*
 * 計画: CLIB::UTIL
 * 筆者: Christopher Kelley (c)2013
 */

#ifndef _LIBUTILS_H_
#define _LIBUTILS_H_

#include <stdlib.h>
#include <unistd.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

typedef unsigned char 	uchar;
typedef unsigned short 	ushort;
typedef unsigned int 	uint;
typedef unsigned long	ulong;
typedef char 			bool;

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef C_
#define C_ (char)
#endif
#ifndef UC_
#define UC_ (unsigned char)
#endif

#ifndef I_
#define I_ (int)
#endif
#ifndef UI_
#define UI_ (unsigned int)
#endif

#ifndef L_
#define L_ (long)
#endif
#ifndef UL_
#define UL_ (unsigned long)
#endif

#ifndef S_ 
#define S_ (short)
#endif
#ifndef US_ 
#define US_ (unsigned short)
#endif

#ifndef F_
#define F_ (float)
#endif
#ifndef D_ 
#define D_ (double)
#endif

#undef __BEGIN_DECLS
#undef __END_DECLS
#ifdef __cplusplus
#	define __BEGIN_DECLS extern "C" {
#	define __END_DECLS }
#else
#	define __BEGIN_DECLS
#	define __END_DECLS
#endif

__BEGIN_DECLS

void* 	xmalloc 	( int );

__END_DECLS

#endif
