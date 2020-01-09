/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/

#include <matchstick.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int	my_nb_len(int nb)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (nb < 0)
		nb = -1 * nb;
	while (nb > 0) {
		nb = nb / 10;
		i++;
	}
	while (i - 1 > 0) {
		i--;
		j = j * 10;
	}
	return (j);
}

int	my_put_nbr(int nb)
{
	int	b;

	b = my_nb_len(nb);
	if (nb < 0) {
		nb = nb * (-1);
		my_putchar('-');
	}
	while (b != 0) {
		my_putchar(nb / b + 48);
		nb = nb % b;
		b = b / 10;
	}
	return (0);
}
