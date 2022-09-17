#include <stdio.h>

/**
 * print_to_98 -print number n to 98
 * @n: integer to print to 98
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
	}
	printf("%d\n", n);
}
