/*
 * 計画: CLIB::STRING
 * 筆者: Christopher Kelley (c)2013
 */

#ifndef _TSUSTR_H_
#define _TSUSTR_H_

#include "../lib/libutils.h"

__BEGIN_DECLS

int 	tsu_str_index		(char*,char);
int 	tsu_str_rindex		(char*,char);
int 	tsu_str_len			(char*);
int 	tsu_str_rev			(char*);

char* 	tsu_str_cat			(char*,char*);
int		tsu_str_cmp			(char*,char*);
int		tsu_str_ncmp		(char*,char*,int);
char*	tsu_str_concat		(char*,char*);
char*	tsu_str_nconcat		(char*,char*,int);
char*	tsu_str_cpy			(char*,char*);
char*	tsu_str_ncpy		(char*,char*,int);
char*	tsu_str_dup			(char*);

char*	tsu_str_combine		(char**,char*);
char** 	tsu_str_split		(char*,char);

int 	tsu_atoi			(char*);
char*	tsu_itoa			(int);

__END_DECLS


#endif
