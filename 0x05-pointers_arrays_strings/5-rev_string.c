#include "main.h"

/**
 *rev_string -print the reverse of the string
 *@s: the string
 *Return: nothing
 */
void rev_string(char *s)
{
	int length = 0;
	int n = 0;
	int tmp;

	while (s[n++])
	{
		length++;
	}

	for (n = (length - 1); n >= (length / 2); n--)
	{
		tmp = s[n];
		s[n] = s[length - n - 1];
		s[length - n - 1] = tmp;
	}
}
