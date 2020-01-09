/*
** EPITECH PROJECT, 2018
** my_mstrncat
** File description:
** my_strmcat
*/

#include <get_next_line.h>

Test(my_mstrncat, my_first_test)
{
	cr_assert_str_eq(my_mstrncat("naj", "ada", 3), "najada");
}

Test(my_mstrncat, my_second_test)
{
	cr_assert_str_eq(my_mstrncat("naj", NULL, 3), "naj");
}

Test(my_mstrncat, my_third_test)
{
	cr_assert_str_eq(my_mstrncat(NULL, "naj", 3), "naj");
}
