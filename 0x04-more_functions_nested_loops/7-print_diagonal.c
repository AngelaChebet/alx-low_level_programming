#include "main.h"

/**
 * print_diagonal -draws a diagnol line at the end of the terminal
 *
 * @n: character for number of times the diagnol should be printed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int diag;
	int space;

	if (n > 0)
	{
		for (diag = 0; diag < n; diag++)
		{
			for (space = 0; space < diag; space++)
			_putchar(' ');
			_putchar('\\');

			if (diag == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
