#include "main.h"

/**
 *puts_half -function that prints second half of a string
 *@str: string
 *Return: nothing
 */
void puts_half(char *str)
{
	int n = 0;
	int length = 0;
	int i;

	while (str[n++])
	{
		length++;
	}

	if ((length % 2) == 0)
		i = length / 2;
	else
		i = (length + 1) / 2;

	for (n = i; n < length; n++)
		_putchar(str[n]);

	_putchar('\n');
}
