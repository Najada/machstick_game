/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(my_put_nbr, first_test, .init = redirect1_all_std)
{
	my_put_nbr(1000);
	cr_assert_stdout_eq_str("1000");
}

Test(my_put_nbr, second_test, .init = redirect1_all_std)
{
	my_put_nbr(-1000);
	cr_assert_stdout_eq_str("-1000");
}

Test(my_putchar, first_test, .init = redirect1_all_std)
{
	my_putchar('*');
	cr_assert_stdout_eq_str("*");
}
