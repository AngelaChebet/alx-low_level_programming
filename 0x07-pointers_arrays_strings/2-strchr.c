#include "main.h"

/**
 *_strchr -Returns a pointer to the first occurrence of the
 *character c in the string s, or NULL if the character is not found
 *@s: the string to be searched
 *@c: the character to be located
 *
 * Return: if c is found -pointer to the first occurence
 *		if not found -NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
