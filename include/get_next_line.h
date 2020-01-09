/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get_next_line
*/

#ifndef _GET_NEXT_LINE_H_
#define _GET_NEXT_LINE_H_

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

char	*my_mstrdup(char *line);
char	*my_mstrncat(char *line1 , char *line2, int n);
char	*my_mstrcat(char *line1 , char *line2);
int	check_new_line(char *str);
void	my_bzero(char *buffer);
int	my_strlen(char const *str);
char	*get_next_line(int fd);

# ifndef READ_SIZE
# define READ_SIZE (23450)
# endif /* ! READ_SIZE */

#endif // _GET_NEXT_LINE_H_
