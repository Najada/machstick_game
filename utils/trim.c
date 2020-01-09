/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick
*/

#include <matchstick.h>

char	*ltrim(char *str)
{
	int	i;
	char	*str2;

	i = 0;
	while ((str[i] == ' ' || str[i] == '\t') && str[i])
		i++;
	str2 = my_strdup(&str[i]);
	if (str2)
		return (str2);
	return ("");
}

char	*rtrim(char *str)
{
	int i;
	char *str2;

	i = my_strlen(str) - 1;
	while ((str[i] == ' ' || str[i] == '\t') && i >= 0) {
		i--;
	}
	str2 = my_strdup(str);
	if (str2) {
		str2[i + 1] = '\0';
		return (str2);
	}
	return ("");
}

char*	trim(char *str)
{
	return (rtrim(ltrim(str)));
}
