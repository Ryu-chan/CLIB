/*
 * xmalloc( int )
 * pre: integer size of space to alloc
 * post: returns alloced memory or has exited
 */

#include "../lib/libutils.h"

 void* 		xmalloc(
	int 	n
){
	void* 	p;

	p = malloc(n);
	
	if (p == 0){
		write(2,"Virtual Memory Exhausted\n",25);
		exit(1);
	}
	
	return p;
}
