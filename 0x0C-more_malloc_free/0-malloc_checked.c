#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to be allocated
 *
 * Return: pointer to allocated memory if succesful exit 98 otherwise
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
