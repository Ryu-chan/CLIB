/*
 * 文字列:
 * 2つの文字列を組み合わせて
 * (2つのもじれつをきみあわせて)
 */

#include "../lib/libstr.h"

char* 			str_combine(
	char** 		vect,
	const char*	delim
){
	int 	t;
	int 	c;
	int 	i;
	char* 	str;

	if(vect==NULL||*vect==NULL)
		return NULL;

	c=0;
	t=0;
	while(vect[t] !=NULL){
		c+=(str_len(vect[t++])+1);
	}
	
	str = (char*)xmalloc( ((t-1)*str_len(delim)+(c)) *sizeof(char));

	t = 0;
	c = 0;
	i = 0;
	while(vect[t] != NULL){
		while(vect[t][i] != '\0'){
			str[c++] = vect[t][i++];
		}
		i=0;
		while(delim[i]!='\0'){
			str[c++] = delim[i++];
		}
		t++;
		i=0;
	}
	str[c-str_len(delim)] = '\0';

	return str;
}
