/*
 * project: 	CLIB::IO
 * author:		Christopher Kelley (c)2013
 */

#ifndef _LIBIO_H_
#define _LIBIO_H_

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#include <stdlib.h>
#include <unistd.h>

void 	xchar			( char );
void 	xchar			( int, char );

void 	xstr			( char* );
void 	xstr			( int, char* );

void 	xint			( int );
void 	xint			( int, int );

void 	xendl			( );

#endif