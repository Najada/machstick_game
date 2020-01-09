/*
** EPITECH PROJECT, 2018
** my_bzero
** File description:
** my_bzero
*/

#include <matchstick.h>

Test(my_bzero, my_first_test)
{
	char	*str;

	str = malloc(sizeof(*str) * (READ_SIZE + 1));
	my_bzero(str);
	cr_assert_eq(str[0], 0);
}
