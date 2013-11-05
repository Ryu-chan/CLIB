/*
 * 印画:ブール
 * (いんが:ブール)
 */

#include "../lib/libio.h"

bool 		writeb(
	bool 	c
){
	if(c==0)
		return writes("FALSE");
	return writes("TRUE");
}

bool 		fwriteb(
	int		fd,
	bool 	c
){
	if(c==0)
		return fwrites(fd,"FALSE");
	return fwrites(fd,"TRUE");
}
