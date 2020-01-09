/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

void	fill_map(char **map, char const *str)
{
	int	k = 0;
	int	i = 0;
	int	j = 0;

	for (i = 0 ; i < 4 ; i++) {
		for (j = 0 ; j < 5 ; j++) {
			map[i][j] = str[k];
			k++;
		}
		map[i][j] = 0;
	}
}
