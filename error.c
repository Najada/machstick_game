/*
** EPITECH PROJECT, 2018
** matchstics
** File description:
** matchstic
*/

#include <matchstick.h>

int	catch_error(int argc, char **argv)
{
	if (argc != 3)
		return (84);
	if (my_str_isnum(argv[1]) == 0 || my_str_isnum(argv[2]) == 0)
		return (84);
	if (my_getnbr(argv[1]) < 0 || my_getnbr(argv[1]) > 100)
		return (84);
	if (my_getnbr(argv[2]) < 0)
		return (84);
	return (0);
}

int     my_str_isnum(char const *str)
{
	int     i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0') {
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
