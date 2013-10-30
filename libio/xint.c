/*
 * xint( int )
 * pre: integer
 * post: int printed to fd 1
 *
 * xint( int, int )
 * pre: file descriptor, integer
 * post: inbt printed to fd provided
 */

#include "../lib/libio.h";

void 				printi(
	int 			n
){
	unsigned int 	i;

	i = (n < 0) ? -n : n;
	
	if (n < 0)
		printc('-');
	
	for (n = 1; n <= (i / 10); n *= 10)
		;
	
	for (; n; i %= n, n /= 10)
		printc('0' + (i / n));
}

void 				fprinti(
	int 			fd
	int 			n
){
	unsigned int 	i;

	i = (n < 0) ? -n : n;
	
	if (n < 0)
		fprintc(fd,'-');
	
	for (n = 1; n <= (i / 10); n *= 10)
		;
	
	for (; n; i %= n, n /= 10)
		fprintc(fd,'0' + (i / n));
}