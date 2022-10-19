#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 * Otherwise - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **two_dim;
	int hgt_ind;
	int wid_ind;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_dim = malloc(sizeof(int *) * height);

	if (two_dim == NULL)
		return (NULL);

	for (hgt_ind = 0; hgt_ind < height; hgt_ind++)
	{
		two_dim[hgt_ind] = malloc(sizeof(int) * width);

		if (two_dim[hgt_ind] == NULL)
		{
			for (; hgt_ind >= 0; hgt_ind--)
				free(two_dim[hgt_ind]);

			free(two_dim);
			return (NULL);
		}
	}

	for (hgt_ind = 0; hgt_ind < height; hgt_ind++)
	{
		for (wid_ind = 0; wid_ind < width; wid_ind++)
			two_dim[hgt_ind][wid_ind] = 0;
	}

	return (two_dim);
}

