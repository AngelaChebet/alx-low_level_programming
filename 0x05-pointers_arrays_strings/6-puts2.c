#include "main.h"

/**
 *puts2 -prints every other character of the string
 *@str: the string
 *Return: nothing
 */
void puts2(char *str)
{
	int n = 0;
	int length = 0;

	while (str[n++])
	{
		length++;
	}

	for (n = 0; n < length; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
