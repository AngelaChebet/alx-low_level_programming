#include "main.h"

/**
 * _islower -int _islower(int c) checks for lower case
 * and brings back int c as 1 if lowercase and 0 if not
 *
 * return valuefor _islower: 1 or 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
{
	return (1);
}
	else
		return (0);
}
