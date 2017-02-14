##
## Makefile for matchstick in /Users/simonlejeune/Epitech/CPE_2016_matchstick/
##
## Made by Simon LEJEUNE
## Login   <simon.lejeune@epitech.eu>
##
## Started on  Tue Feb 14 15:55:24 2017 Simon LEJEUNE
## Last update Tue Feb 14 16:09:03 2017 Simon LEJEUNE
##

SRC	=	src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		gcc $(OBJ) -o $(NAME)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
