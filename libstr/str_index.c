/*
 * 文字列:
 * 文字列内の文字のインデックスを見つける
 */

#include "../lib/libstr.h"

int 		str_index(
	char* 	hay,
	char 	needle
){
	int i;

	i = 0;

	if (hay != NULL)
		for (; *hay != '\0'; hay++, i++)
			if(*hay == needle)
				return i;
			
	return -1;
}