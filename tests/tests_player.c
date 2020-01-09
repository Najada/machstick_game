/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(check_lines,  first_test, .init = redirect1_all_std)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	s[3] = "34";
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	check_lines(&match, s, &player);
	cr_assert_stdout_eq_str("Error: this line is out of range\n");
	free_map(map);
}

Test(check_lines,  second_test, .init = redirect1_all_std)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	s[6] = "hshsh";
	char	s1[55] = "Error: invalid input (positive number expected)\n";
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	check_lines(&match, s, &player);
	cr_assert_stdout_eq_str(s1);
	free_map(map);
}

Test(check_lines,  third_test, .init = redirect1_all_std)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	s[2] = "2";
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	check_lines(&match, s, &player);
	cr_assert_stdout_eq_str("Matches: ");
	free_map(map);
}
