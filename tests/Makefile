##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC_TESTS = tests.c

SRC =	mypaint.c

OBJ = $(addprefix ../src/, $(SRC:.c=.o)) $(SRC_TESTS:.c=.o)

NAME = ../unit_tests

CFLAGS = -Wall -Wextra -Werror -I../include/ --coverage

LDCRI = -lcriterion

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDCRI)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

run_tests: all
	./$(NAME)

tests_run: all
	./$(NAME)

.PHONY: all clean fclean run_tests tests_run
