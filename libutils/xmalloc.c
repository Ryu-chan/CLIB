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
		my_str("Virtual Memory Exhausted\n");
		exit(1);
	}
	
	return p;
}