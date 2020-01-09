/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(check_end_game, firt_test)
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
	cr_assert_eq(check_end_game(&match), 0);
	free_map(map);
}

Test(check_end_game, second_test)
{
	matches_t match;
	char const *str = "******   **   ******";
	char	**map = malloc(sizeof(*map) * 4);

	match.n = 2;
	match.n_max = 4;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	cr_assert_eq(check_end_game(&match), 1);
	free_map(map);
}
