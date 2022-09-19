#include "main.h"

/**
 *_strlen -function that returns the length of a string
 *@s: the string that is counted
 *Return: return the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}

	return (length);
}
