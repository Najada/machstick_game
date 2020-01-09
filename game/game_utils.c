/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

int	check_end_game(matches_t *match)
{
	for (int i = 0 ; i < match->n + 2 ; i++) {
		for (int j = 0 ; j < 2 * match-> n + 1 ; j++) {
			if (match->map[i][j] == '|')
				return (0);
		}
	}
	return (1);
}

void	display_map(matches_t match)
{
	for (int i = 0 ; i < match.n + 2 ; i++) {
		my_fputstr(1, match.map[i]);
		my_fputstr(1, "\n");
	}
}

void	update_map(matches_t *match, player_t *player)
{
	int	tmp = player->nb_matches;

	for (int i = my_strlen(match->map[player->nb_line]) - 1 ; i > 0 \
		&& tmp > 0 ; i--) {
		if (match->map[player->nb_line][i] == '|' && tmp > 0) {
			match->map[player->nb_line][i] = 32;
			tmp--;
		}
	}
}
