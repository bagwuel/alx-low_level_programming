#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string to be encoded
 *
 * Return: the encoded s
 */

char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
				s[i] = (s[i] + 13) - 26;
			else
				s[i] = s[i] + 13;
			i++;
		}
		i++;
	}
	return (s);
}
