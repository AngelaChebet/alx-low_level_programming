#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)

{
		int n;
			srand(time(0));

				n = rand() - RAND_MAX / 2;

				scanf("%d", &n);

				if (n > 0)
				{
					printf("%d is positive\n", n);
				}
				else if (n < 0)
				{
					printf("%d is negative\n", n);
				}
				else
				{
					printf("%d is zero\n", n);
				}
					/* your code goes there */

					return (0);

}