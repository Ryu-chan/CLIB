/*
 * 文字列:
 * 2つの文字列を追加する
 */

#include "../lib/libstr.h"

char* 		str_nconcat(
	char* 	s1,
	char* 	s2,
	int 	n
){
	char* 	str;
	int 	loc;

	if (n < 0) n = 0;
	
	str = (char*) xmalloc(my_strlen(s1) + n + 1);
	loc = 0;
	
	if (s1 != NULL)
		while (*s1 != '\0')
			str[loc++] = *(s1++);
	
	if (s2 != NULL)
		for (; *s2 != '\0' & n > 0; n--)
			str[loc++] = *(s2++);
	
	str[loc] = '\0';

	return (s1 == NULL && s2 == NULL) ? NULL : str;
}