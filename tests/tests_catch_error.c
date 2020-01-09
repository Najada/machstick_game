/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

Test(catch_error, first_test)
{
	int	argc = 2;
	char	*argv[] = {"./matchstick", "2"};

	cr_assert_eq(catch_error(argc, argv), 84);
}

Test(catch_error, second_test)
{
	int	argc = 3;
	char	*argv[] = {"./matchstick", "az", "3"};

	cr_assert_eq(catch_error(argc, argv), 84);
}

Test(catch_error, third_test)
{
	int	argc = 3;
	char	*argv[] = {"./matchstick", "1000", "3"};

	cr_assert_eq(catch_error(argc, argv), 84);
}

Test(catch_error, forth_test)
{
	int	argc = 3;
	char	*argv[] = {"./matchstick", "4", "-2"};

	cr_assert_eq(catch_error(argc, argv), 84);
}

Test(catch_error, fifth_test)
{
	int	argc = 3;
	char	*argv[] = {"./matchstick", "4", "2"};

	cr_assert_eq(catch_error(argc, argv), 0);
}
