# lib (utils) makefile

CFLAGS += -pedantic-errors

NAME = 	utils
SRC = \
	xmalloc.c
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