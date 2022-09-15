#include "main.h"

/**
 * print_square -prints size of a square using the #
 *
 * @size: -the size of the square
 *
 * Return: nothing
 */
void print_square(int size)
{
	int sqr;
	int n;

	if (size > 0)
	{
		for (sqr = 0; sqr < size; sqr++)
		{
			for (n = 0; n < size; n++)
			_putchar('#');

			if (sqr == size - 1)
				continue;
			_putchar('\n');
		}


	}
	_putchar('\n');
}
