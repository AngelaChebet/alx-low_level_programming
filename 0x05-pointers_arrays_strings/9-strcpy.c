#include "main.h"

/**
 *_strcpy -function that copies the string pointed to by src
 *to pointed buffer dest
 *@src: -source string
 *@dest: the string to be copied into
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
