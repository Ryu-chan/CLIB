/*
 * 文字列:
 * 2つの文字列を比較する
 * (2つのもじれつをひかくする)
 */

#include "../lib/libstr.h"

int 		str_cmp(
	char* 	s1,
	char* 	s2
){
	if (s1 == NULL)
		if (s2 == NULL)
			return 0;
		else
			return -1;
	if (s2 == NULL)
		return 1;
	for(; *s1 != '\0' && *s2 == *s1; s1++, s2++)
		;
	return *s1 - *s2;
}