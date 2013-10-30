/*
 * xstr( char )
 * pre: valid string - \0 terminating
 * post: string printed to fd 1
 *
 * xstr( int, char )
 * pre: file descriptor, valid string - \0 terminating
 * post: string printed to fd provided
 */

#include "../lib/libio.h";

void 		prints(
	char* 	str
){
	if(str!=NULL)
		while(*str!='\0')
			write(1,str++,1);
}

void 		fprints(
	int		fd,
	char*	str
){
	if(str!=NULL)
		while(*str!='\0')
			write(fd,str++,1);
}