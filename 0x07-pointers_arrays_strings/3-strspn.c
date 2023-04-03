#include "main.h"

/**
 * has_all - checks if a string has all the letters of another string
 * @s: main string
 * @n: length of main string
 * @sb: substring
 *
 * Return: 1 if true, 0 otherwise.
 */

int has_all(char *s, int n, char *sb)
{
	int i;
	int j;

	i = 0;
	while (sb[i] != '\0')
	{
		j = 0;
		while (j < n)
		{
			if (s[j] == sb[i])
				break;
			j++;
		}
		if (j == n)
			return (0);
		i++;
	}
	return (1);
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
	int acc_len;

	acc_len = 0;
	while (accept[acc_len] != '\0')
		acc_len++;
	while (s[acc_len] != '\0')
	{
		if (has_all(s, acc_len, accept))
			break;
		acc_len++;
	}
	return (acc_len);
}
