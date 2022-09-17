#include <stdio.h>

/**
 * main -computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i, sum3 = 0, sum5 = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum3 += i;
		}

		if (i % 5 == 0)
		{
			sum5 += i;
		}
	}
	printf("%d\n", sum3 + sum5);

	return (0);
}
