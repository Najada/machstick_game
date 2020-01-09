/*
** EPITECH PROJECT, 2018
** my_lib
** File description:
** my_lib
*/

#include <matchstick.h>

int	my_strlen(char const *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i = i + 1;
	return (i);
}
