/*
 * 印画:改行
 * (いんが:かいぎょう)
 */

#include "../lib/libio.h"

bool 		writee(
){
	return writec('\n');
}

bool 		fwritee(
	int		fd
){
	return fwritec(fd,'\n');
}
