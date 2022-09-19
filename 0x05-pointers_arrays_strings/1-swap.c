#include "main.h"

/**
 *swap_int -function that swaps the values of two integers
 *@a: first integer to be swaped
 *@b: second integer to be swaped
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
