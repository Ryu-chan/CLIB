/*
 * 文字列:
 * 整数を文字列に変更し
 */

#include "../lib/libstr.h"

char* 		str_itoa(
	int 	n
){
	
	unsigned int 	i;
	unsigned int 	s;

	i = (n < 0) ? -n : n;
	
	for (s = 0, n = 1; n <= (i / 10); s++, n *= 10)
		;

	char* a = (char*)xmalloc( (s+2)*sizeof(char) );

	s = 0;

	if (n < 0)
		a[s++] = '-';
	
	for (; n; i %= n, n /= 10)
		a[s++] = ('0' + (i / n));

	a[s] = '\0';

	return a;

}
