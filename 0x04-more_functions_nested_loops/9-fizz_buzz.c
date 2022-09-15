#include <stdio.h>

/**
 * main -prints numbers 1 to 100, multiple of 3 is
 * printed Fizz, multiple of 5 is printed Buzz and multiple
 * of both 3 and 5 is printed FizzBuzz
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else
			printf("%d", n);
		printf(" ");
	}

	printf("\n");
	return (0);
}
