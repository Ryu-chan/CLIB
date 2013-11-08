/*
 * 文字列:
 * 文字列内の文字のインデックスを見つける
 */

#include "../lib/libstr.h"

int 		str_rindex(
	char* 	hay,
	char 	needle
){
	int 	i;
	int 	it;

	i = 0;
	it = -1;

	if (hay != NULL)
		while (*hay != '\0'){
			if (*hay == needle)
				it = i;
			i++;
			hay++;
		}
	return it;
}