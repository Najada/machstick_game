/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>


void	free_map(char **map)
{
	for (int i = 0 ; i < 4 ; i++)
		free(map[i]);
	free(map);
}

Test(check_ai_matches, first_test)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);

	match.n = 2;
	match.n_max = 4;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	cr_assert_eq(check_ai_matches(&match, 0), 0);
	free_map(map);
}

Test(check_ai_matches, second_test)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);

	match.n = 2;
	match.n_max = 4;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	cr_assert_eq(check_ai_matches(&match, 1), 1);
	free_map(map);
}

Test(check_ai_matches, third_test)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);

	match.n = 2;
	match.n_max = 4;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	cr_assert_eq(check_ai_matches(&match, 2), 3);
	free_map(map);
}
