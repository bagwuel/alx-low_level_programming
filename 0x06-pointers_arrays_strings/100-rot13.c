#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string to be encoded
 *
 * Return: the encoded s
 */

char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (*(s + i))
	{
		j = 0;
		while (j < 52)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}

