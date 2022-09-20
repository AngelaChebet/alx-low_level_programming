#include  <stdio.h>
/**
 *print_array -function that prints n elements of an array of integers
 *@n: number of elements to be printed
 *@a: arrays of integers
 *Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
