#include <stdio.h>

/**
 * main -prints the sum of the even-valued terms of the fibonacci sequence
 * followed by a new line
 *Return: always 0 (success)
 */
int main(void)
{
	unsigned long first_no = 0;
	unsigned long second_no = 1;
	unsigned long next_no;
	float sum;

	while (1)
	{
		next_no = first_no + second_no;

		if (next_no > 4000000)
			break;

		if ((next_no % 2) == 0)
			sum += next_no;

		first_no = second_no;
		second_no = next_no;
	}

	printf("%.0f\n", sum);
	return (0);
}
