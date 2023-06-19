#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string to be concatenated
 * @src: string to be concatenated
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
