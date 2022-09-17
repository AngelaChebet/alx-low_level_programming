#include "main.h"

/**
 * times_table -print times table upto 9
 *
 * return: nothing
 */
void times_table(void)
{
	int i;
	int n;
	int multi;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');
			multi = (i * n);

			if (multi <= 9)
				_putchar(' ');
			else
				_putchar((multi / 10) + '0');

			_putchar((multi % 10) + '0');
		}
		_putchar('\n');
	}
}
