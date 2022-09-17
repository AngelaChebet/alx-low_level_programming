#include "main.h"

/**
 * print_times_table -print the times table for n
 * @n: prints the times table of n
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, multi;

	if (n >= 0 && n > 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				multi = i * j;

				if (multi <= 99)
					_putchar(' ');
				if (multi <= 9)
					_putchar(' ');
				if (multi >= 100)
				{
					_putchar((multi / 100) + '0');
					_putchar(((multi / 10) % 10) + '0');
				}
				else if (multi >= 99 && multi <= 10)
				{
					_putchar((multi / 10) + '0');
				}
				_putchar((multi % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

