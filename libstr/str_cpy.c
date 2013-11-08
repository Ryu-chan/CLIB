/*
 * 文字列:
 * 第二の文字列に最初の文字列をコピーする
 * (だいにのもじれつにさいしょのもじれつをコピーする)
 */

#include "../lib/libstr.h"

char* 		str_cpy(
	char* 	s1,
	char* 	s2
){
	char* 	b;
	
	b = s1;

	if (s1 != NULL && s2 != NULL){
		for (; *s2 != '\0'; s1++, s2++)
			*s1 = *s2;
		*s1 = *s2;
	}

	return b;
}