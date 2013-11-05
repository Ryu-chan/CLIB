/*
 * 計画: CLIB::IO
 * 筆者: Christopher Kelley (c)2013
 */

#ifndef _LIBIO_H_
#define _LIBIO_H_

#include "../lib/libutils.h"

__BEGIN_DECLS

bool 	writec			( char );
bool 	fwritec			( int, char );

bool 	writes			( const char* );
bool 	fwrites			( int, const char* );

bool 	writei			( int );
bool 	fwritei			( int, int );

bool 	writeb			( bool );
bool	fwriteb			( int, bool );

bool 	writef			( float );
bool 	fwritef			( int, float );

bool 	writee			( );
bool 	fwritee			( int );

__END_DECLS

#endif
