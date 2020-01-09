/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstik
*/

#include <matchstick.h>

int	main(int argc, char **argv)
{
	matches_t	match;
	if (catch_error(argc, argv) == 84) {
		my_fputstr(2, "Program takes two positive params.\n");
		return (84);
	}
	match.map = create_game_board(my_getnbr(argv[1]));
	match.n = my_getnbr(argv[1]);
	match.n_max = my_getnbr(argv[2]);
	display_map(match);
	return (game_loop(&match));
}
