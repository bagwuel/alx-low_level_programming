#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: buffer to be filled
 * @b: byte to be filled in s
 * @n: number of bytes of s to be filled
 *
 * Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
