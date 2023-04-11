#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: NULL if size is 0 or fails, pointer to array otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (!p)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}
