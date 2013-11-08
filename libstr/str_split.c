/*
 * 文字列:
 * 文字列を分割
 * (もじれつをぶんかつ)
 */

#include "../lib/libstr.h"

char** 			str_split(
	const char* str
	char		delim
){
	char* strst = str;
	char* cpy;
	int cnt;
	int i;
	int p;

	for(cnt=0,i=0;*str!='\0';str++){
		if(*str==' '){
			i=0;
		}else if(i==0){
			cnt++;
			i=-1;
		}
	}

	char** vect = (char**)xmalloc((cnt+1)*sizeof(char*));

	for(i=0;i<cnt;i++){
		while((*strst)==delim)(strst)++;

		p = my_strindex(strst,delim);
		if(p<0)p = my_strlen(strst);

		cpy = (char*)xmalloc((p)*sizeof(char));

		my_strncpy(cpy,strst,p);
		vect[i] = cpy;
		strst = &strst[p];
	}
	vect[i]=NULL;

	return vect;
}