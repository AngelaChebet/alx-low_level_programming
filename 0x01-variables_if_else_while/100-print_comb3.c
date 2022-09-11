#include <stdio.h>

/**
 * main -prints any possible combination of two digits with a comma and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1;
	int d2;
	int n = 0;

	for (d1 = 0; d1 < 10; d1++)
{
	for (d2 = 0; d2 < 10; d2++,n++)
{
	if (n > 0)
{
	putchar(',');
	putchar(' ');
}
	putchar((d1 % 10) + '0');
	putchar((d2 % 10) + '0');
}
}
	putchar('\n');

	return (0);
}
