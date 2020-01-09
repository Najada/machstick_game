/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

void	fill_first_part(game_t *game, int i, int n)
{
	game->map[game->row][game->col] = '*';
	game->col++;
	for (int j = 0 ; j < n - i - 1; j++) {
		game->map[game->row][game->col] = ' ';
		game->col++;
	}
	for (int j = 0 ; j < i + 1 ; j++) {
		game->map[game->row][game->col] = '|';
		game->col++;
	}
}

void	fill_second_part(game_t *game, int i, int n)
{
	for (int j = 0 ; j < i ; j++) {
		game->map[game->row][game->col] = '|';
		game->col++;
	}
	for (int j = 0 ; j < n - i - 1 ; j++) {
		game->map[game->row][game->col] = ' ';
		game->col++;
	}
	game->map[game->row][game->col] = '*';
	game->col++;
	game->map[game->row][game->col] = 0;
	game->row++;
	game->col = 0;
}

void	fill_first_line(game_t *game, int n)
{
	for (int i = 0 ; i < 2 * n + 1 ; i++) {
		game->map[game->row][game->col] = '*';
		game->col++;
	}
	game->map[game->row][game->col] = 0;
	game->row++;
	game->col = 0;
}

void	fill_last_line(game_t *game, int n)
{
	for (int i = 0 ; i < 2 * n + 1 ; i++) {
		game->map[game->row][game->col] = '*';
		game->col++;
	}
	game->map[game->row][game->col] = 0;
}
