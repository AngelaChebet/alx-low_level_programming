#include <stdio.h>

/**
 * main -prints the first 98 Fibonacci numbers, starting with 1 and 2
 * followed by a new line.
 *
 * Return: 0 (suceed)
 */
int main(void)
{
	int i;
	unsigned long first_no = 0;
	unsigned long second_no = 1;
	unsigned long next_no;

	for (i = 0; i < 98; i++)
	{
		next_no = first_no + second_no;

		printf("%lu", next_no);

		first_no = second_no;
		second_no = next_no;

		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
