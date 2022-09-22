#include "main.h"

/**
 *_strcmp -function that compares two strings
 *@s1: -first pointer of the string
 *@s2: -second pointer of the string
 *Return: the difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
