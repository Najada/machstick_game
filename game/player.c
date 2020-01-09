/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** function for the player
*/

#include <matchstick.h>

int	check_lines(matches_t *match, char *str, player_t *player)
{
	if (my_str_isnum(str) == 0) {
		my_fputstr(1, "Error: invalid input ");
		my_fputstr(1, "(positive number expected)\n");
		return (1);
	} else if (my_getnbr(str) <= 0 || my_getnbr(str) > match->n) {
		my_fputstr(1, "Error: this line is out of range\n");
		return (1);
	} else {
		player->nb_line = my_getnbr(str);
		my_fputstr(1, "Matches: ");
	}
	return (0);
}

int	check_nb_matches(matches_t *match, player_t *player)
{
	int	i = 0;
	int	count = 0;

	while (match->map[player->nb_line][i]) {
		if (match->map[player->nb_line][i] == '|')
			count++;
		i++;
	}
	return (count);
}

int	check_if_valid_match(matches_t *match, char *str)
{
	if (my_str_isnum(str) == 0) {
		my_fputstr(1, "Error: invalid input ");
		my_fputstr(1, "(positive number expected)\n");
		return (1);
	} else if (my_getnbr(str) > match->n_max) {
		my_fputstr(1, "Error: you cannot remove more than ");
		my_put_nbr(match->n_max);
		my_fputstr(1,  " matches per turn\n");
		return (1);
	}
	return (0);
}

int	check_if_enough_matches(matches_t *match, player_t *player)
{
	if (check_nb_matches(match, player) < player->nb_matches) {
		my_fputstr(1, "Error: not enough matches on this line\n");
		return (1);
	} else {
		update_map(match, player);
		display_player_move(player);
		display_map(*match);
	}
	return (0);
}

int	check_matches(matches_t *match, char *str, player_t *player)
{
	if (check_if_valid_match(match, str) == 1)
		return (1);
	else if (my_getnbr(str) == 0) {
		my_fputstr(1, "Error: you have to remove at least one match\n");
		return (1);
	}
	else {
		player->nb_matches = my_getnbr(str);
		if (check_if_enough_matches(match, player) == 1)
			return (1);
	}
	return (0);
}
