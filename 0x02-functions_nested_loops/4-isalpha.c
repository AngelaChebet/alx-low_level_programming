#include "main.h"

/**
 * _isalpha -checks if character c is alphabet
 *
 * @c -the parameter c to be checked
 *
 * return value for _isalpha: 1 if c is a letter otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
	else

	return (0);
}
