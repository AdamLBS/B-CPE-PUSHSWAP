##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

NAME = push_swap

SRC =	pushswap.c \
		my_putchar.c \
		my_putstr.c \
		utils.c \
		linked_list.c \
		my_get_nbr.c \

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	gcc -o $(NAME) $(OBJ) -g3

all : 	$(NAME)

clean :
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY : all clean fclean re