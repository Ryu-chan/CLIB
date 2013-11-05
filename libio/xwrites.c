/*
 * 印画:文字列
 * (いんが:もじれつ)
 */

#include "../lib/libio.h"

bool 				writes(
	const char* 	str
){
	if(str!=NULL)
		while(*str!='\0')
			if( write(1,str++,1) <= 0) return FALSE;
	return TRUE;
}

bool 				fwrites(
	int				fd,
	const char*		str
){
	if(str!=NULL)
		while(*str!='\0')
			if( write(fd,str++,1) <= 0) return FALSE;
	return TRUE;
}
