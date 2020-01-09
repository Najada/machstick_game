/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(create_game_board, first_test)
{
	char	**my_map = create_game_board(2);
	char	**map = malloc(sizeof(*map) * 4);
	char const *str = "****** | **|||******";

	for (int i = 0 ; i < 4 ; i++)
		map[i] = malloc(sizeof(**map) * 6);
	fill_map(map, str);
	for (int i = 0 ; i < 4 ; i++)
		cr_assert_str_eq(map[i], my_map[i]);
}
