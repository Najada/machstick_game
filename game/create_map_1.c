/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

void	x_malloc(game_t *game, int n)
{
	int	i = 0;

	game->row = 0;
	game->col = 0;
	game->map = malloc(sizeof(*game->map) * n + 2);
	while (i < n + 2) {
		game->map[i] = malloc(sizeof(**game->map) * (2 * n + 2));
		i++;
	}
}

char 	**create_game_board(int n)
{
	int	i = 0;
	game_t	game;

	x_malloc(&game, n);
	fill_first_line(&game, n);
	for (i = 0 ; i < n ; i++) {
		fill_first_part(&game,i, n);
		fill_second_part(&game, i, n);
	}
	fill_last_line(&game, n);
	return (game.map);
}
