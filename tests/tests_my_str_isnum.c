/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(my_str_isnum, first_test)
{
	cr_assert_eq(my_str_isnum("345"), 1);
}

Test(my_str_isnum, second_test)
{
	cr_assert_eq(my_str_isnum("3v45"), 0);
}

Test(my_str_isnum, third_test)
{
	char	str[] = {'n', 'a', 'd', '\0'};

	str[0] = 0;
	cr_assert_eq(my_str_isnum(str), 1);
}
