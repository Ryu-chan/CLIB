# lib (io) makefile

CFLAGS += -pedantic-errors

NAME = 	io
SRC = \
	xwriteb.c \
	xwritec.c \
	xwritee.c \
	xwritef.c \
	xwritei.c \
	xwrites.c 
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
	cc -pedantic-errors -L $(LIBPATH) -lio -o test test.o