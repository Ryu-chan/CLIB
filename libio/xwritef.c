/*
 * 印画:浮動小数
 * (いんが:ふどうしょうすう)
 */

#ifndef PRECISION
#define PRECISION 100000
#endif

#include "../lib/libio.h"

bool 		writef(
	float 	f
){
	int part;

	part = (int)f;
	if(!writei(part)) return FALSE;
	if(!writec('.'))  return FALSE;
	f-=part;
	part = ((int)(f*PRECISION));
	if(!writei(part)) return FALSE;
	return TRUE;
}

bool 		fwritef(
	int		fd,
	float	f
){
	int part;

	part = (int)f;
	if(!fwritei(fd,part)) return FALSE;
	if(!fwritec(fd,'.'))  return FALSE;
	part = ((int)(f*PRECISION)%PRECISION);
	if(!fwritei(fd,part)) return FALSE;
	return TRUE;
}
