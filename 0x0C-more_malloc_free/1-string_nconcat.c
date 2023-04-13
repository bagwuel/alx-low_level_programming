#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be copied from s2
 *
 * Return: pointer to newly concatenated string if success; NULL otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, mem = 0;
	char *p;

	while (s1 && s1[i])
		i++;
	while (s2 && s2[j])
		j++;
	mem = i + n + 1;
	if (n >= j)
		mem = i + j + 1;
	p = malloc(sizeof(char) * (mem));
	if (!p)
		return (NULL);
	i = 0;
	if (s1)
		while (*s1)
			p[i++] = *s1++;
	j = 0;
	if (s2)
		while (s2[j] && j < n)
			p[i++] = s2[j++];
	p[i] = '\0';
	return (p);
}
