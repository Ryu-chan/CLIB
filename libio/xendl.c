/*
 * xendl( )
 * pre: 
 * post: return char printed to fd 1
 *
 * xendl( int )
 * pre: file descriptor
 * post: return char printed to fd provided
 */

#include "../lib/libio.h"

void 		printe(
){
	printc('\n');
}

void 		fprinte(
	int		fd
){
	fprintc(fd,'\n');
}
