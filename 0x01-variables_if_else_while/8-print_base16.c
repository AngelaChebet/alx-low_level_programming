#include <stdio.h>

/**
 * main -print all the numbers in base 16 in lowercase
 *
 * Base 16 uses powers of 16. The possible digits are 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, and F
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int ch;

	for (i = 0; i < 10; i++)
{
	putchar((i%10) + '0');
}
	for (ch = 'a'; ch <= 'f'; ch++)
{
	putchar(ch);
}
	putchar('\n');

	return (0);
}
