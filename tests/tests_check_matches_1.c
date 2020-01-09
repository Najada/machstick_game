/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(check_matches, third_test, .init = redirect1_all_std)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	s[2] = "0";
	char s1[55] = "Error: you have to remove at least one match\n";
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

Test(check_matches, third)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	s[2] = "0";
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

Test(check_matches, forth_test, .init = redirect1_all_std)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	s[3] = "aa";
	char s1[55] = "Error: invalid input (positive number expected)\n";
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	player.nb_line = 1;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	check_matches(&match, s, &player);
	cr_assert_stdout_eq_str(s1);
	free_map(map);
}

Test(check_matches, forth)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	s[3] = "aa";
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	player.nb_line = 1;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	cr_assert_eq(check_matches(&match, s, &player), 1);
	free_map(map);
}
