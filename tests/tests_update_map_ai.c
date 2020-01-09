/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

void	fill_map_ai(char **map, char const *str)
{
	int	k = 0;
	int	i = 0;
	int	j = 0;

	for (i = 0 ; i < 3 ; i++) {
		for (j = 0 ; j < 3 ; j++) {
			map[i][j] = str[k];
			k++;
		}
		map[i][j] = 0;
	}
}

Test(update_map_ai, first_test)
{
	matches_t match;
	char const *str = "****|****";
	char	**map = malloc(sizeof(*map) * 3);
	char	**map2 = malloc(sizeof(*map) * 3);

	match.n = 1;
	match.n_max = 4;
	for (int i = 0 ; i < 3 ; i++) {
		map[i] = malloc(sizeof(**map) * 4);
		map2[i] = malloc(sizeof(**map) * 4);
	}
	fill_map_ai(map, str);
	fill_map_ai(map2, str);
	match.map = map;
	update_map_ai(&match);
	cr_assert_str_neq(match.map[1], map2[1]);
}
