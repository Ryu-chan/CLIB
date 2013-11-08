/*
 * 文字列:
 * 第二の文字列に最初の文字列をコピーする
 */

#include "../lib/libstr.h"

char* 		str_ncpy(
	char* 	s1,
	char* 	s2,
	int 	n
){
	char* 	b;
	
	b = s1;

	if (s1 != NULL && s2 != NULL){
		for (; *s2 != '\0' && n > 0; s1++, s2++, n--)
			*s1 = *s2;
		if (n > 0)
			*s1 = *s2;
	}

	return b;
}