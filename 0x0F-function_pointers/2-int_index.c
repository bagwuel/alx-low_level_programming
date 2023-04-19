#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer.
 * @array: array to searched
 * @size: size of array to be searched
 * @cmp: function to compare function
 *
 * Return: index of the first element for which the cmp function
 * does not return 0, -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}

