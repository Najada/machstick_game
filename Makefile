
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	utils/my_getnbr.c	\
		utils/my_strlen.c	\
		game/create_map.c	\
		game/create_map_1.c	\
		utils/my_fputstr.c	\
		getline/get_next_line.c	\
		tests/fill_map.c	\
		main.c	\
		error.c	\
		game/game_loop.c	\
		utils/trim.c	\
		utils/my_strdup.c	\
		utils/my_put_nbr.c	\
		game/ai.c	\
		game/game_utils.c	\
		game/player.c	\
		game/player1.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

CFLAGS	=	-I./include -W -Wall  -ggdb

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm *~ -f $(NAME)
		rm *.gcda  -f $(NAME)
		rm *.gcno  -f $(NAME)
		rm *~ -f $(NAME)
		rm *.o -f $(NAME)

re:		fclean all

tests_run:
		make -C ./tests/
		./tests/units
