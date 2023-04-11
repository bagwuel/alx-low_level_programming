#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: 2D array
 * @height: number of 1D arrays in grid
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
		free(*(grid + i++));
	free(grid);
}
