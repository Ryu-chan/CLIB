/*
 * xchar( char )
 * pre: valid ascii char
 * post: char printed to fd 1
 *
 * xchar( int, char )
 * pre: file descriptor, valid ascii char
 * post: char printed to fd provided
 */

#include "../lib/libio.h";

void 		printc(
	char 	c
){
	write(1,&c,1);
}

void 		fprintc(
	int		fd,
	char	c
){
	write(fd,&c,1);
}