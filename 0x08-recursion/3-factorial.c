#include "main.h"

/**
 *factorial -returns the factorial of a given number
 *@n: the number to find the factorial
 *Return: if n>0 -return the factorial.
 *if n<0 return an error
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

	return ((n * factorial(n - 1)));
}
