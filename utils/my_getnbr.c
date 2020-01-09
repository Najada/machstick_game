/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** my_getnbr
*/

int	my_getnbr(char const *str)
{
	int	i;
	int	sgn;
	int	result;

	i = 0;
	sgn = 1;
	result = 0;
	while (str[i] == '-' || str[i] == '+') {
		if (str[i] == '-')
			sgn = -1 * sgn;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i]) {
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result = sgn * result;
	return (result);
}
