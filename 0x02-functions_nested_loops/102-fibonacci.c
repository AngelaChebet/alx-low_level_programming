#include <stdio.h>

/**
 * main -prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: nothing
 */
int main(void)
{
	int first_no = 0;
	unsigned long second_no = 1;
	unsigned long next_no;
	int i;

	for (i = 0; i <= 50; i++)
	{
		next_no = first_no + second_no;

		printf("%lu", next_no);

		first_no = second_no;
		second_no = next_no;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	
	return (0);
}
