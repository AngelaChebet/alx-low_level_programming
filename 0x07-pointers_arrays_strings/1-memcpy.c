#include "main.h"

/**
 *_memcpy - function copies n bytes from memory area src to memory area dest
 *@dest: pointer to copy memory to
 *@src: pointer to copy memory from
 *@n: number of bytes
 *
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
