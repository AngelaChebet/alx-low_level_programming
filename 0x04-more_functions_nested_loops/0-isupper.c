#include "main.h"

/**
 * _isupper -checks for uppercase characters c
 * @c: the character c to be checked
 *
 * return value _isupper: 1 if character c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
