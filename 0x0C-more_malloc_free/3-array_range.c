#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers.
 * @min: min integer in array
 * @max: max integer in array
 *
 * Return: NULL if min > max or malloc fails;
 * pointer to array otherwise
 */

int *array_range(int min, int max)
{
	int i = 0, size;
	int *p;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (!p)
		return (NULL);
	while (min <= max)
		p[i++] = min++;
	return (p);
}
