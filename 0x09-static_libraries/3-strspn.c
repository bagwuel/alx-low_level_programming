#include "main.h"

/**
 * has_char - checks if a string has all the letters of another string
 * @s: string to be checked
 * @c: cahracter to be checked
 *
 * Return: 1 if true, 0 otherwise.
 */

int has_char(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: main string
 * @accept: substring
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int n;

	n = 0;
	while (*s)
	{
		if (has_char(accept, *s))
		{
			n++;
			s++;
			break;
		}
		s++;
	}
	while (*s)
	{
		if (!has_char(accept, *s))
			break;
		n++;
		s++;
	}
	return (n);
}
