/*
 * 文字列:
 * 文字列の長さ
 */

#include "../lib/libstr.h"

int 		str_len(
	char* 	str
){
	int 	i;
	
	i = 0;

	if (str != NULL)
		while ( *(str++) != '\0')
			i++;
	return i;
}

