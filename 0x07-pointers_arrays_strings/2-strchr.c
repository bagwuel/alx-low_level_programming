#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string to be searched
 * @c: character to be searched for
 *
 * Return: pointer to the first occurrence of the character c
 * if found, 0 otherwise.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
