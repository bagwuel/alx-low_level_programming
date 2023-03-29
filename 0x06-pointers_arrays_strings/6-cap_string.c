#include "main.h"

/**
 * _contains - checks if a string contains a character
 * @str: string to be checked
 * @c: character to be checked for
 *
 * Return: 1 if c is in str and 0 otherwise
 */

int _contains(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

/**
 * _toupper - converts a character to uppercase
 * @c: character to be converted
 *
 * Return: uppercase version of character
 */

char _toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/**
 * _tolower - converts a character to lowercase
 * @c: character to be converted
 *
 * Return: lowercase version of character
 */

char _tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/**
 * _isalpha - checks if a charater if an alphbet
 * @c: character to be checked
 *
 * Return: 1 if c is an alphabet and 0 otherwise
 */

int _isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to be capitalized
 *
 * Return: pointer to str
 */

char *cap_string(char *str)
{
	int i;
	char septr[] = " ,;.!?\"(){}\n\t\v";

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && _isalpha(str[i]))
		{
			str[i] = _toupper(str[i]);
			i++;
		}
		if (_isalpha(str[i]) && _contains(septr, str[i - 1]))
		{
			str[i] = _toupper(str[i]);
			i++;
		}
		while (!_contains(septr, str[i]))
		{
			if (_isalpha(str[i]))
				str[i] = _tolower(str[i]);
			i++;
		}
		i++;
	}
	return (str);
}
