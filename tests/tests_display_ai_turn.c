/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(display_ai_turn, first_test, .init = redirect1_all_std)
{
	player_t ai;
	char const *s = "\nAI's turn...\nAI removed 3 match(es) from line 2\n";

	ai.nb_line = 2;
	ai.nb_matches = 3;
	display_ai_turn(ai);
	cr_assert_stdout_eq_str(s);
}

Test(display_ai_turn, second_test, .init = redirect1_all_std)
{
	player_t ai;
	char const *s = "\nAI's turn...\nAI removed 1 match(es) from line 4\n";

	ai.nb_line = 4;
	ai.nb_matches = 1;
	display_ai_turn(ai);
	cr_assert_stdout_eq_str(s);
}
