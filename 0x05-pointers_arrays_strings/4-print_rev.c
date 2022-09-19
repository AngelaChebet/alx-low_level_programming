#include "main.h"

/**
 *print_rev -function that prints a string, in reverse, followed by a new line
 *@s: string that is printed in reverse
 *Return: nothing
 */
void print_rev(char *s)
{
	int length = 0;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (length = length - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
