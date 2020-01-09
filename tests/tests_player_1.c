/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(check_lines,  first)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	*s = my_strdup("34");
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	cr_assert_eq(check_lines(&match, s, &player), 1);
	free_map(map);
}

Test(check_lines,  second)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	*s = my_strdup("hshsh");
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	cr_assert_eq(check_lines(&match, s, &player), 1);
	free_map(map);
}

Test(check_lines,  third)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	*s = my_strdup("2");
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	cr_assert_eq(check_lines(&match, s, &player), 0);
	free_map(map);
}
