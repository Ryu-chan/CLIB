# lib (str) makefile

CFLAGS += -pedantic-errors

NAME = 	str
SRC = \
 str_atoi.c \
 str_cmp.c \
 str_combine.c \
 str_concat.c \
 str_cpy.c \
 str_dup.c \
 str_index.c \
 str_itoa.c \
 str_len.c \
 str_ncmp.c \
 str_nconcat.c \
 str_ncpy.c \
 str_rev.c \
 str_rindex.c \
 str_split.c
OBJ = 	$(SRC:.c=.o)
RM = 	rm -f
LIBPATH = ../lib

#

all: $(OBJ)
	ar -rc $(LIBPATH)/lib$(NAME).a $(OBJ)
	ranlib $(LIBPATH)/lib$(NAME).a

clean:
	-$(RM) *.o
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.swp
	-$(RM) *.core

fclean: clean
	-$(RM) $(LIBPATH)/lib$(NAME).a

re: fclean all

test: test.o
	cc -pedantic-errors -L $(LIBPATH) -lutils -lio -o test test.o