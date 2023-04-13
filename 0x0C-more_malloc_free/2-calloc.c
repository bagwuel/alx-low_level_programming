#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of members in array
 * @size: size of each element in array
 *
 * Return: NULL if nmemb or size is 0 of malloc fails;
 * pointer to memory otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	while (i < nmemb * size)
	{
		*(p + i) = 0;
		i++;
	}
	return (p);
}
