#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated strings on success; NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *p;

	i = 0;
	j = 0;
	while (s1 != NULL && s1[i])
		i++;
	while (s2 != NULL && s2[j])
		j++;
	p = malloc(sizeof(char) * (i + j) + 1);
	if (!p)
		return (NULL);
	i = 0;
	if (s1 != NULL)
		while (*s1)
			*(p + i++) = *s1++;
	if (s2 != NULL)
		while (*s2)
			*(p + i++) = *s2++;
	*(p + i) = '\0';
	return (p);
}
