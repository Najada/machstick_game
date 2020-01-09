/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(check_nb_matches, first_test)
{
	matches_t	match;
	char const	*str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	player.nb_line = 1;
	player.nb_matches = 1;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	cr_assert_eq(check_nb_matches(&match, &player), 1);
	free_map(map);
}

Test(check_nb_matches, second_test)
{
	matches_t	match;
	char const	*str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	player.nb_line = 2;
	player.nb_matches = 1;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	cr_assert_eq(check_nb_matches(&match, &player), 3);
	free_map(map);
}
