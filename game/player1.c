/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** player part
*/

#include <matchstick.h>

void	display_player_move(player_t *player)
{
	my_fputstr(1, "Player removed ");
	my_put_nbr(player->nb_matches);
	my_fputstr(1, " match(es) from line ");
	my_put_nbr(player->nb_line);
	my_fputstr(1, "\n");
}
