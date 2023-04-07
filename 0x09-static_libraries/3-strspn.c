#include "main.h"

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
	int i;

	n = 0;
	while (*s)
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
			{
				n++;
				s++;
				break;
			}
			i++;
		}
		if (accept[i] != '\0')
			break;
		s++;
	}
	while (*s)
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
			{
				n++;
				break;
			}
			i++;
		}
		if (accept[i] == '\0')
			break;
		s++;
	}
	return (n);
}
