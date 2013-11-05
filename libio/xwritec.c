/*
 * 印画:文字
 * (いんが:もじ)
 */

#include "../lib/libio.h"

bool 		writec(
	char 	c
){
	return ( write(1,&c,1) > 0 );
}

bool 		fwritec(
	int		fd,
	char	c
){
	return ( write(fd,&c,1) > 0 );
}
