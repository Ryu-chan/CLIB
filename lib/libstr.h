/*
 * 計画: CLIB::文字列
 * 筆者: Christopher Kelley (c)2013
 */

#ifndef _LIBSTR_H_
#define _LIBSTR_H_

#include "../lib/libutils.h"

__BEGIN_DECLS

int 	str_index		(const char*,char);
int 	str_rindex		(const char*,char);
int 	str_len			(const char*);
int 	str_rev			(char*);

int		str_cmp			(const char*,const char*);
int		str_ncmp		(const char*,const char*,int);
char*	str_concat		(const char*,const char*);
char*	str_nconcat		(const char*,const char*,int);
char*	str_cpy			(char*,const char*);
char*	str_ncpy		(char*,const char*,int);
char*	str_dup			(const char*);

char*	str_combine		(char**,const char*);
char** 	str_split		(const char*,char);

int 	str_atoi		(const char*);
char*	str_itoa		(int);

__END_DECLS


#endif
