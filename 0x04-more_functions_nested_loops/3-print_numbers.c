#include "main.h"

/**
 * print_numbers -print number 0 to 9 followed by a new line
 * Return: no return as it is void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
{
		_putchar((i % 10) + '0');
}
	_putchar('\n');
}
