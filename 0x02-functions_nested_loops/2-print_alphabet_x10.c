#include "main.h"

/**
 * print_alphabet_x10 -prints the alphabet in lower case ten times
 *
 * no return as its void
 */
void print_alphabet_x10(void)
{
	int n;
	char ch;

	n = 0;
	while (n <= 9)
{
	ch = 'a';
	while (ch <= 'z')
{
	_putchar(ch);
	ch++;
}
	_putchar('\n');
	n++;
}
}
