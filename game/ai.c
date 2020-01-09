/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

int	check_ai_matches(matches_t *match, int line)
{
	int	i = 0;
	int	count = 0;

	while (match->map[line][i]) {
		if (match->map[line][i] == '|')
			count++;
		i++;
	}
	return (count);
}

int	chose_line(matches_t *match)
{
	int	line = 0;

	while (line == 0 || check_ai_matches(match, line) == 0)
		line = rand() % match->n + 1;
	return (line);
}

void	update_map_ai(matches_t *match)
{
	player_t	ai;

	ai.nb_line = chose_line(match);
	ai.nb_matches = chose_matches(match, ai.nb_line);
	display_ai_turn(ai);
	update_map(match, &ai);
	display_map(*match);
}

int	chose_matches(matches_t *match, int line)
{
	int nb_matches = 0;

	while (nb_matches == 0 || check_ai_matches(match, line) < nb_matches) {
		nb_matches = rand () % match->n_max + 1;
	}
	if ((nb_matches % 2) == 1)
		return (nb_matches / 2 + 1);
	else
		return (nb_matches / 2);
//	if (check_ai_matches(match, line) - nb_matches == 0 && nb_matches > 1)
//		nb_matches--;
	return (nb_matches);
}

void	display_ai_turn(player_t ai)
{
	my_fputstr(1, "\nAI's turn...\n");
	my_fputstr(1, "AI removed ");
	my_put_nbr(ai.nb_matches);
	my_fputstr(1, " match(es) from line ");
	my_put_nbr(ai.nb_line);
	my_fputstr(1, "\n");
}
