/*
 * project: 	CLIB::IO
 * author:		Christopher Kelley (c)2013
 */

#ifndef _LIBIO_H_
#define _LIBIO_H_

#include "../lib/libutils.h"

#ifndef C_
#define C_ (char)
#endif
#ifndef I_
#define I_ (int)
#endif
#ifndef F_
#define F_ (float)
#endif

__BEGIN_DECLS

void 	printc			( char );
void 	fprintc			( int, char );

void 	prints			( char* );
void 	fprints			( int, char* );

void 	printi			( int );
void 	fprinti			( int, int );

void 	endl			( );
void 	fendl			( int );

__END_DECLS

#endif
