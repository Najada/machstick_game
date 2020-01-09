/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(my_strdup, first_test)
{
	cr_assert_null(my_strdup(NULL));
}

Test(my_strdup, third_test)
{
	cr_assert_str_eq(my_strdup("najada"), "najada");
}
