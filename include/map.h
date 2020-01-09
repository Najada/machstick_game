/*
** EPITECH PROJECT, 2018
** machstick
** File description:
** matchstick
*/

#ifndef _MAP_H_
#define _MAP_H_

typedef struct {
	char	**map;
	int	row;
	int	col;
} game_t;

void	fill_first_part(game_t *game, int i, int n);
void	fill_second_part(game_t *game, int i, int n);
void	fill_first_line(game_t *game, int n);
void	fill_last_line(game_t *game, int n);
void	x_malloc(game_t *game, int n);
char 	**create_game_board(int n);
int	my_strlen(char const *str);
int	my_getnbr(char const *str);
void	my_fputstr(int fd, char const *str);
void	fill_map(char **map, char const *str);
int	catch_error(int argc, char **argv);
int     my_str_isnum(char const *str);

#endif // _MAP_H_
