/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstik
*/

#include <matchstick.h>

void redirect1_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(my_fputstr, first_test, .init = redirect1_all_std)
{
	my_fputstr(1, "najada");
	cr_assert_stdout_eq_str("najada");
}

Test(my_fputstr, second_test, .init = redirect1_all_std)
{
	my_fputstr(1, "najada");
	cr_assert_stdout_eq_str("najada");
}

Test(my_fputstr, third_test, .init = redirect1_all_std)
{
	my_fputstr(1, " ");
	cr_assert_stdout_eq_str(" ");
}
