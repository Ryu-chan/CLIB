/*
 * 計画: CLIB::文字列
 * 筆者: Christopher Kelley (c)2013
 */

#ifndef _LIBSTR_H_
#define _LIBSTR_H_

#include "../lib/libutils.h"

__BEGIN_DECLS

int 	str_index		(char*,char);
int 	str_rindex		(char*,char);
int 	str_len			(char*);
int 	str_rev			(char*);

int		str_cmp			(char*,char*);
int		str_ncmp		(char*,char*,int);
char*	str_concat		(char*,char*);
char*	str_nconcat		(char*,char*,int);
char*	str_cpy			(char*,char*);
char*	str_ncpy		(char*,char*,int);
char*	str_dup			(char*);

char*	str_combine		(char**,const char*);
char** 	str_split		(char*,char);

int 	str_atoi		(const char*);
char*	str_itoa		(int);

__END_DECLS


#endif
