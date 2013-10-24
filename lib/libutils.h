/*
 * project: 	CLIB::UTIL
 * author:		Christopher Kelley (c)2013
 */

#ifndef _LIBUTILS_H_
#define _LIBUTILS_H_

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
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

void* xmalloc ( int );

__END_DECLS

#endif