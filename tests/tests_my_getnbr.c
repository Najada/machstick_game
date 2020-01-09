/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(my_getnbr, first_test)
{
	cr_assert_eq(my_getnbr("23"), 23);
}

Test(my_getnbr, second_test)
{
	cr_assert_eq(my_getnbr("-23"), -23);
}

Test(my_getnbr, third_test)
{
	cr_assert_eq(my_getnbr("----+23"), 23);
}
