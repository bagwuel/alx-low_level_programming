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

	if (old_size == new_size)
		return (ptr);
	if (new_size <= 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (!p)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr)
	{
		i = 0;
		nvp = (char *)ptr;
		while (i < new_size && i < old_size)
		{
			p[i] = nvp[i];
			i++;
		}
		p[i] = '\0';
		free(ptr);
	}
	return (p);
}
