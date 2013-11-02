# lib (io) makefile

CFLAGS += -pedantic-errors

NAME = 	io
SRC = \
	xchar.c \
	xint.c \
	xstr.c \
	xendl.c
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