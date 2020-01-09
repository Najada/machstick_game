/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get_next_line
*/

#include <matchstick.h>

int g = -1;

void	open_file1(void)
{
	g = open("tests/test.txt", O_RDONLY );
	cr_redirect_stdout();
}

void	close_file1(void)
{
	if (g != -1)
		close(g);
}

Test(get_next_line, read_line_2, . init = open_file1, . fini = close_file1)
{
	cr_assert_null(get_next_line(g));
}

void	open_file2(void)
{
	g = open("tests/empty_file", O_RDONLY );
	cr_redirect_stdout();
}

Test(get_next_line, read_line_3, . init = open_file2, . fini = close_file1)
{
	cr_assert_null(get_next_line(g));
}
