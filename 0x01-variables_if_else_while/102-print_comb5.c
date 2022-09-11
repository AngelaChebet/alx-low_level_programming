#include <stdio.h>

/**
 * main -print a range of two combination of numbers
 * the set of two numbers should be separated by a space and then a comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1;
	int d2;

	for (d1 = 0; d1 <= 98; d1++)
{
	for (d2 = d1 + 1; d2 <= 99; d2++)
{
	putchar((d1 / 10) + '0');
	putchar((d1 % 10) + '0');
	putchar(' ');
	putchar((d2 / 10) + '0');
	putchar((d2 % 10) + '0');

	if (d1 == 98 && d2 == 99)

	continue;
	putchar(',');
	putchar(' ');
}

}

	putchar('\n');

	return (0);
}
