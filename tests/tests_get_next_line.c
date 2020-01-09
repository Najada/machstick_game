/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get_next_line
*/

#include <matchstick.h>

int	f = -1;

void	open_file(void)
{
	f = open("tests/data.txt", O_RDONLY );
	cr_redirect_stdout();
}

void	close_file(void)
{
	if (f != -1)
		close(f);
}

Test(get_next_line, read_line, . init = open_file, . fini = close_file)
{
	char	*expected = "Confidence is so overrated.";
	char	*got = get_next_line(f);

	cr_assert_str_eq(got, expected);
	free(got);
}

Test(get_next_line, read_line_1, . init = open_file, . fini = close_file)
{
	char	*expected = "It's when we're most uncomfortable";
	char	*got = get_next_line(f);
	char	*got1 = get_next_line(f);

	cr_assert_str_eq(got1, expected);
	free(got);
	free(got1);
}
