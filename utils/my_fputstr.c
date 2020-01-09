/*
** EPITECH PROJECT, 2018
** my_lib
** File description:
** my_lib
*/

#include <matchstick.h>

void	my_fputstr(int fd, char const *str)
{
	write(fd, str, my_strlen(str));
}
