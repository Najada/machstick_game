/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

int	check_over_all(matches_t *match, char *s, player_t *player)
{
	if (check_matches(match, s, player) == 0) {
		if (check_end_game(match) == 1) {
			my_fputstr(1, "You lost, too bad...\n");
			return (2);
		}
		update_map_ai(match);
		if (check_end_game(match) == 1) {
			my_fputstr(1, "I lost... snif... ");
			my_fputstr(1, "but I'll get you next time!!\n");
			return (1);
		} else
			my_fputstr(1, "\nYour turn:\n");
	}
	return (0);
}

int	game_loop(matches_t *match)
{
	char *s;
	player_t	player;
	int	a;

	my_fputstr(1, "\nYour turn:\n");
	while (42) {
		my_fputstr(1, "Line: ");
		s = get_next_line(0);
		if (!s)
			return (0);
		if (check_lines(match, s, &player) == 0) {
			s = get_next_line(0);
			if (!s)
				return (0);
			if ((a = check_over_all(match, s, &player)) != 0)
				return (a);
		}
	}
}
