#include <stdio.h>

/**
 * main -print single digit numbers separated by a comma and in ascending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
{
	putchar((i % 10) + '0');
	putchar(',');
	putchar(' ');

	i++;
}
	putchar('\n');

	return (0);
}
