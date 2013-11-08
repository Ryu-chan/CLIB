/*
 * 文字列:
 * 文字列を整数に変更し 
 * (もじれつをせいすうにへんこうし)
 */

#include "../lib/libstr.h"

int 			str_atoi(
	const char* a
){
	char 		m;
	int 		i;

	m = 1;
	i = 0;

	while( *str=='-' || *str=='+' ){
		if(*str=='-')
			m *= -1;
		str++;
	}
	while(*str-'0'<=9 && *str-'0'>=0 && *str!='\0'){
		i+= (*str)-'0';
		i*= 10;
		str++;
	}
	return m*i/10;
}
