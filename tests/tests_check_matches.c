/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(check_matches, first_test, .init = redirect1_all_std)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	s[3] = "34";
	char s1[55] = "Error: you cannot remove more than 4 matches per turn\n";
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	player.nb_line = 2;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	check_matches(&match, s, &player);
	cr_assert_stdout_eq_str(s1);
	free_map(map);
}

Test(check_matches, first)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	s[3] = "34";
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	player.nb_line = 2;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	cr_assert_eq(check_matches(&match, s, &player), 1);
	free_map(map);
}

Test(check_matches, second_test, .init = redirect1_all_std)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	s[2] = "4";
	char	s1[39] = "Error: not enough matches on this line\n";
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	player.nb_line = 2;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	check_matches(&match, s, &player);
	cr_assert_stdout_eq_str(s1);
	free_map(map);
}

Test(check_matches, second)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	s[2] = "4";
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	player.nb_line = 2;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	cr_assert_eq(check_matches(&match, s, &player), 1);
	free_map(map);
}
