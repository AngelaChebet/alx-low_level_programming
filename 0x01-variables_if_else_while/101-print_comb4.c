#include <stdio.h>

/**
 * main -print a set of three digit combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1;
	int d2;
	int d3;
	int n = 0;

	for (d1 = 0; d1 < 10; d1++)
{
	for (d2 = d1 + 1; d2 < 10; d2++)
{
	for (d3 = d2 + 1; d3 < 10; d3++, n++)
{
	if (n > 0)
{
	putchar(',');
	putchar(' ');
}
	putchar((d1 % 10) + '0');
	putchar((d2 % 10) + '0');
	putchar((d3 % 10) + '0');
}
}
}
	putchar ('\n');

	return (0);
}
