#include "main.h"

/**
 * int _islower(int c) checks for lower case 
 * and brings back 1 if lowercase and 0 if not
 *
 * return value: 1 or 0 (Success)
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
