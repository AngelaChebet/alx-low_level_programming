#include <stdio.h>

/**
 * main -print single digit numbers separated by a comma and in ascending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
{
	if (i > 0 && i <= 9)
{
	putchar(',');
	putchar(' ');
}
	putchar((i % 10) + '0');
}
	putchar('\n');

	return (0);
}
