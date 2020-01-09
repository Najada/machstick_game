/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(display_player_move, first_test, .init = redirect1_all_std)
{
	player_t	player;
	char const	*str = "Player removed 1 match(es) from line 1\n";

	player.nb_line = 1;
	player.nb_matches = 1;
	display_player_move(&player);
	cr_assert_stdout_eq_str(str);
}
