##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC_DIR	=	$(realpath ..)

SRC	=	$(SRC_DIR)/utils/my_getnbr.c\
		$(SRC_DIR)/utils/my_strlen.c\
		$(SRC_DIR)/tests/fill_map.c\
		$(SRC_DIR)/utils/my_fputstr.c\
		$(SRC_DIR)/game/create_map.c	\
		$(SRC_DIR)/game/create_map_1.c	\
		$(SRC_DIR)/getline/get_next_line.c	\
		$(SRC_DIR)/error.c	\
		$(SRC_DIR)/utils/my_put_nbr.c	\
		$(SRC_DIR)/utils/my_strdup.c	\
		$(SRC_DIR)/game/game_loop.c	\
		$(SRC_DIR)/utils/trim.c	\
		$(SRC_DIR)/game/game_utils.c	\
		$(SRC_DIR)/game/ai.c	\
		$(SRC_DIR)/game/player.c	\
		$(SRC_DIR)/game/player1.c	\

SRC_UT_DIR	=	$(realpath .)

SRC_UT	=	$(SRC_UT_DIR)/tests_my_strlen.c	\
		$(SRC_UT_DIR)/tests_my_getnbr.c	\
		$(SRC_UT_DIR)/tests_my_fputstr.c	\
		$(SRC_UT_DIR)/tests_my_bzero.c	\
		$(SRC_UT_DIR)/tests_check_new_line.c	\
		$(SRC_UT_DIR)/tests_my_mstrncat.c	\
		$(SRC_UT_DIR)/tests_get_next_line.c	\
		$(SRC_UT_DIR)/tests_get_next_line1.c	\
		$(SRC_UT_DIR)/tests_create_game_board.c	\
		$(SRC_UT_DIR)/tests_my_str_isnum.c	\
		$(SRC_UT_DIR)/tests_catch_error.c	\
		$(SRC_UT_DIR)/tests_my_putnbr.c	\
		$(SRC_UT_DIR)/tests_my_strdup.c	\
		$(SRC_UT_DIR)/tests_check_nb_matches.c	\
		$(SRC_UT_DIR)/tests_trim.c	\
		$(SRC_UT_DIR)/tests_chose_line.c	\
		$(SRC_UT_DIR)/tests_chose_matches.c	\
		$(SRC_UT_DIR)/tests_check_ai_matches.c	\
		$(SRC_UT_DIR)/tests_display_ai_turn.c	\
		$(SRC_UT_DIR)/tests_update_map_ai.c	\
		$(SRC_UT_DIR)/tests_display_player_move.c	\
		$(SRC_UT_DIR)/tests_player.c	\
		$(SRC_UT_DIR)/tests_player_1.c	\
		$(SRC_UT_DIR)/tests_check_matches.c	\
		$(SRC_UT_DIR)/tests_check_matches_1.c	\
		$(SRC_UT_DIR)/tests_check_matches_2.c	\
		$(SRC_UT_DIR)/tests_check_end_game.c	\

OBJ	=	$(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS	=	-Wall -Wextra -I../include --coverage

LDFLAGS	=	-lcriterion -lgcov -lm

NAME	=	units

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ) $(LDFLAGS)
clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm *.gcda  -f $(NAME)
		rm *.gcno  -f $(NAME)
		rm *~ -f $(NAME)
		rm *.o -f $(NAME)

re:		fclean all
