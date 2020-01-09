/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** my_strlen
*/

#include <matchstick.h>

Test(my_strlen, my_first_test)
{
	cr_assert_eq(my_strlen(NULL), 0);
}

Test(my_strlen, my_second_test)
{
	cr_assert_eq(my_strlen("najada"), 6);
}
