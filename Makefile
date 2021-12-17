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
		main.c \
		append.c \
		get_size.c \

SRC_TESTS =	utils.c \
		append.c \
		get_size.c \
		my_get_nbr.c\
		tests/make_list.c \
		tests/test_is_sorted.c \
		tests/test_neg.c \
		tests/test_size.c \

OBJ = $(SRC:.c=.o)


$(NAME) : $(OBJ)
	gcc -o $(NAME) $(OBJ) -g3

all : 	$(NAME)

clean :
	rm -f $(OBJ)
	rm -f *.gcda
	rm -f *.gcno
	rm -f unit_tests
fclean: clean
	rm -f $(NAME)

re:	fclean all

tests_run: $(SRC_TESTS)
			rm -f *.gcda
			rm -f *.gcno
			gcc -o unit_tests $(SRC_TESTS) --coverage -lcriterion -w
		   ./unit_tests

.PHONY : all clean fclean re tests_run
