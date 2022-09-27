#include "main.h"

/**
 *_strspn -Returns the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 * @s: the string to be searched
 * @accept: the prefix to be measured
 *
 * Return: number of bytes that are in s which
 *	only consist of bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int bytes = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);

}
