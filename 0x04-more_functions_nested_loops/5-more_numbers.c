#include "main.h"

/**
 * more_numbers -print 10 times the numbers 0 to 14 followed by a new line
 *
 */
void more_numbers(void)
{
	int i;
	int n;

	n = 0;

	while (n <= 9)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}

		_putchar('\n');

		n++;
	}
}
