/*
 * 印画:整数
 * (いんが:せいすう)
 */

#include "../lib/libio.h"

bool 				writei(
	int 			n
){
	unsigned int 	i;

	i = (n < 0) ? -n : n;
	
	if (n < 0)
		if(!writec('-'))return FALSE;
	
	for (n = 1; n <= (i / 10); n *= 10)
		;
	
	for (; n; i %= n, n /= 10)
		if(!writec('0' + (i / n)) )return FALSE;

	return TRUE;
}

bool 				fwritei(
	int 			fd,
	int 			n
){
	unsigned int 	i;

	i = (n < 0) ? -n : n;
	
	if (n < 0)
		if(!fwritec(fd,'-')) return FALSE;
	
	for (n = 1; n <= (i / 10); n *= 10)
		;
	
	for (; n; i %= n, n /= 10)
		if(!fwritec(fd,'0' + (i / n)) )return FALSE;

	return TRUE;
}
