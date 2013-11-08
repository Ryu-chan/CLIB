/*
 * 文字列:
 * 文字列を逆に (もじれつをぎゃくに)
 */

#include "../lib/libstr.h"

int 		str_rev(
	char* 	str
){
	int		b;
	int 	bb;

	b = str_len(str) + 1;
	bb = b - 1;

	while ( (b -= 2) > 0 ){
		(*str) ^= (str[b]); 
		(str[b]) ^= (*str);
		(*str) ^= (str[b]);
		str++;
	}

	return bb;
	
}

