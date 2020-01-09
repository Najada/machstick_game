/*
** EPITECH PROJECT, 2018
** 
** File description:
** matchstick
*/

#ifndef _AI_H_
#define _AI_H_

int	check_ai_matches(matches_t *match, int line);
int	chose_line(matches_t *match);
int	chose_matches(matches_t *match, int line);
void	display_ai_turn(player_t ai);
void	update_map_ai(matches_t *match);

#endif // _AI_H_
