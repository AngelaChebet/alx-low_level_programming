#include "main.h"

/**
 * _isdigit -checks for a digit 0 to 9
 * @c: the number c to be checked
 *
 * Return: 1 if the number c is a digit
 * 0 otherwie
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
