#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to old memory
 * @old_size: size of ptr
 * @new_size: size of new memory
 *
 * Return: NULL if new_size is 0, ptr if new_size = old_size;
 * pointer to new allocation otherwise
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *nvp;
	unsigned int i;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (!p)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	nvp = ptr;
	while (i < new_size && i < old_size)
	{
		p[i] = nvp[i];
		i++;
	}
	free(ptr);
	return (p);
}
