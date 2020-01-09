/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#ifndef _GAME_LOOP_H
#define _GAME_LOOP_H

typedef struct {
	char	**map;
	int	n;
	int	n_max;
} matches_t;

typedef struct {
	int	nb_line;
	int	nb_matches;
} player_t;

char	*ltrim(char *str);
char	*rtrim(char *str);
char*	trim(char *str);
void	my_putchar(char c);
int	my_nb_len(int nb);
int	my_put_nbr(int nb);
char	*my_strdup(char *line);
int	check_nb_matches(matches_t *match, player_t *player);
void	display_map(matches_t match);
int	check_lines(matches_t *match, char *str, player_t *player);
void	display_player_move(player_t *player);
int	check_matches(matches_t *match, char *str, player_t *player);
int	game_loop(matches_t *match);
void	update_map(matches_t *match, player_t *player);
int	check_ai_matches(matches_t *match, int line);
int	chose_line(matches_t *match);
int	chose_matches(matches_t *match, int line);
void	display_ai_turn(player_t ai);
void	update_map_ai(matches_t *match);
int	check_end_game(matches_t *match);
int	check_if_valid_match(matches_t *match, char *str);


#endif // _GAME_LOOP_H
