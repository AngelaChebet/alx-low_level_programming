#include "main.h"

/**
 *_strpbrk -function locates the first occurrence in the string
 * s of any of the bytes in the string accept
 * @s: string to be searched
 * @accept: set of bytes to be searched
 *
 * Return: if a set is matched -pointer to the matched byte
 * if no set is matched -NULL
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
