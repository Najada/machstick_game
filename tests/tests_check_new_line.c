/*
** EPITECH PROJECT, 2018
** check_new_line
** File description:
** check_new_line
*/

#include <matchstick.h>

Test(check_new_line, my_first_test)
{
	cr_assert_eq(check_new_line(NULL), -1);
}

Test(check_new_line, my_second_test)
{

	cr_assert_eq(check_new_line("naj\nada"), 3);
}

Test(check_new_line, my_third_test)
{

	cr_assert_eq(check_new_line("najada"), -1);
}
