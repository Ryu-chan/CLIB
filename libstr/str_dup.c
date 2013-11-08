/*
 * 文字列:
 * 重複文字列
 */

#include "../lib/libstr.h"

char* 		my_strdup(
	char* 	s1
){
	char* 	str;
	char*	b;

	str = (char*) xmalloc(my_strlen(s1));
	b = str;

	if (s1!=NULL){
		for (; *s1 != '\0'; s1++, str++)
			*str = *s1;
		return b;
	}

	return NULL;

	//これはstrcpy関数で行うことができます
	//少ない関数呼び出し
}