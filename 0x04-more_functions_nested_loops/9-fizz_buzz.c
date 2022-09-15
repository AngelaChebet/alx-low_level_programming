#include <stdio.h>

/**
 * main -display numbers 0 to 100, numbers multiple of 3 are
 * replaced with the word Fizz, numbers multiple of 5 are
 * replaced with the word Buzz, numbers that are multiples of 3
 * and 5 are replaced with the word FizzBuzz
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz");
		}

		else if ((n % 3) == 0)
		{
			printf("Fizz");
		}

		else if ((n % 5) == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", n);
		printf(" ");
	}

	printf("\n");
	return (0);
}
