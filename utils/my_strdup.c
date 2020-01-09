/*
** EPITECH PROJECT, 2018
** my_strdup
** File description:
** my_strdup
*/

#include <matchstick.h>

char	*my_strdup(char *line)
{
	char	*new_line;
	int	i;

	if (line == NULL || line[0] == '\0')
		return (NULL);
	if ((new_line = malloc(sizeof(*new_line) * \
		my_strlen(line))) == NULL)
		return (NULL);
	for (i = 0 ; line[i] ; i++)
		new_line[i] = line[i];
	new_line[i] = '\0';
	return (new_line);
}
