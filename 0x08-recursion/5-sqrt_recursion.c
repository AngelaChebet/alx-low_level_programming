#include "main.h"

/**
 *find_sqrt -finds the square root of a number
 *@num: number to find the square root
 *@root: the root to be tested
 * Return: the square root if number has a
 * natural square root. Otherwise return error
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (-1);
	}
	return (find_sqrt(num, (root + 1)));
}

/**
 *_sqrt_recursion -returns the natural square root of the
 *number
 *@n: the number to return the square root of
 *Return: If n has a natural square root - the natural square root of n
 *otherwise return error
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (find_sqrt(n, root));
}
