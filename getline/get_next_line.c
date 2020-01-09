/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get_next_line
*/

#include <get_next_line.h>

int	check_new_line(char *str)
{
	if (str == NULL)
		return (-1);
	for (int i = 0 ; str[i] ; i++)
		if (str[i] == '\n')
			return (i);
	return (-1);
}

void	my_bzero(char *buffer)
{
	int	i;

	i = 0;
	while (i < READ_SIZE + 1) {
		buffer[i] = 0;
		i++;
	}
}

char	*my_mstrncat(char *line1 , char *line2, int n)
{
	int	i;
	int	j;
	char	*line;

	i = 0;
	j = 0;
	if ((line = malloc(sizeof(*line) * (my_strlen(line1)\
		+ my_strlen(line2) + 1))) == NULL)
		return (NULL);
	if (line1) {
		for (i = 0 ; line1[i] != '\0' ; i++)
			line[i] = line1[i];
	}
	if (line2) {
		for (j = 0 ; line2[j] != '\0' && j < n ; j++)
			line[i + j] = line2[j];
	}
	line[i + j] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	int		index;
	char		*new_line = NULL;
	static char 	*rest = NULL;
	static	int	len = 1;

	if ((buffer = malloc(sizeof(*buffer) * READ_SIZE + 1)) == NULL)
		return (NULL);
	my_bzero(buffer);
	if ((index = check_new_line(rest)) != -1 ) {
		new_line = my_mstrncat(new_line, rest, index);
		rest = &rest[index + 1];
		return (new_line);
	}
 	if (len == 0)
		return (NULL);
	new_line = my_mstrncat(new_line, rest, my_strlen(rest));
	if ((len = read(fd, buffer, READ_SIZE)) == -1 || len == 0)
		return (NULL);
	while (len > 0 && check_new_line(buffer) == -1) {
		new_line = my_mstrncat(new_line, buffer, my_strlen(buffer));
		my_bzero(buffer);
		len = read(fd, buffer, READ_SIZE);
	}
	if (len > 0) {
		new_line = my_mstrncat(new_line, buffer,\
		check_new_line(buffer));
		if (&buffer[check_new_line(buffer) + 1])
			rest = &buffer[check_new_line(buffer) + 1];
	}
	return (new_line);
}
