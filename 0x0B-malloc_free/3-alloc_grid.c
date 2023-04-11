#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: number of elements in each 1 dimensional array
 * @height: number of 1 dimensional array
 *
 * Return: NULL if width or height is 0 or negative or on failure;
 * pointer to 2D array otherwise.
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (!p)
		return (NULL);
	i = 0;
	while (i < height)
	{
		*(p + i) = malloc(sizeof(int) * width);
		if (!*(p + i))
		{
			i--;
			while (i >= 0)
				free(*(p + i--));
			free(p);
			return (NULL);
		}
		j = 0;
		while (j < width)
			*(*(p + i) + j++) = 0;
		i++;
	}
	return (p);
}
