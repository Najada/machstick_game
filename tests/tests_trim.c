/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(trim, first_test)
{
	cr_assert_str_eq(trim("    najada    "), "najada");
}

Test(trim, second_test)
{
	cr_assert_str_eq(trim("        "), "");
}
