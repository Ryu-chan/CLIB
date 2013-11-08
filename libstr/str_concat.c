/*
 * 文字列:
 * 2つの文字列を追加する
 * (2つのもじれつをついかする)
 */

#include "../lib/libstr.h"

char* 		str_concat(
	char* 	s1,
	char* 	s2
){
	char* 	str;
	int 	loc;
	
	str = (char*) xmalloc(str_len(s1) + str_len(s2) + 1);
	loc = 0;
	
	if (s1 != NULL)
		while (*s1 != '\0')
			str[loc++] = *(s1++);
	
	if (s2 != NULL)
		while (*s2 != '\0')
			str[loc++] = *(s2++);
	
	str[loc] = '\0';
	
	return (s1 == NULL && s2 == NULL) ? NULL : str;
}