#include "main.h"

/**
 *_memset -first n bytes of the memory area
 *pointed to by s with the constant byte b
 *@s: a pointer to the memory to be filled
 *@b: the character to be filled with
 *@n: the number of bytes to be filled
 *
 * Return: pointer character s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
