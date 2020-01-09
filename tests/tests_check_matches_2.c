/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(check_matches, fifth)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	*s = my_strdup("3");
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	player.nb_line = 2;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	cr_assert_eq(check_matches(&match, s, &player), 0);
	free_map(map);
}

Test(check_matches, sixth)
{
	matches_t match;
	char const *str = "****** | **|||******";
	char	**map = malloc(sizeof(*map) * 4);
	char	*s = my_strdup("3");
	player_t	player;

	match.n = 2;
	match.n_max = 4;
	player.nb_line = 2;
	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	match.map = map;
	check_matches(&match, s, &player);
	cr_assert_eq(player.nb_matches, 3);
	free_map(map);
}
