#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)

{
		int n, lastn;

			srand(time(0));

				n = rand() - RAND_MAX / 2;

				scanf("%d", &n);

				/* find the last digit */
				lastn = n % 10;

				if (lastn > 5)
				{
					printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
				}
				else if (lastn != 0 && lastn < 6)
					printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
				else
				{
					printf("Last digit of %d is %d and is 0\n", n, lastn);
				}

					/* your code goes there */

					return (0);
}
