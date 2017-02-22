##
## Makefile for matchstick in /Users/simonlejeune/Elementary_Programming_in_C/Sem2/CPE_2016_matchstick/
##
## Made by Simon LEJEUNE
## Login   <simon.lejeune@epitech.eu>
##
## Started on  Tue Feb 21 15:30:07 2017 Simon LEJEUNE
## Last update Wed Feb 22 13:25:01 2017 Simon LEJEUNE
##

CC	=	gcc

CFLAGS	=	-W -Wall

SRC	=	src/main.c \
			src/functions.c \
			src/matchstick.c \
			src/error.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
