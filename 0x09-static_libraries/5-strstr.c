#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring.
 * @haystack: main string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = i;
		k = 0;
		while (needle[k] != '\0')
		{
			if (needle[k] != haystack[j])
				break;
			k++;
			j++;
		}
		if (needle[k] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
