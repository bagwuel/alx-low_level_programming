#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to char array whose length is to be returned
 *
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * _palindrome - checks for palindrome in a string
 * @s: pointer to char array
 * @end: pointer to end of string
 * Return: 1 if s is a palindrome and 0 otherwise
 */

int _palindrome(char *s, char *end)
{
	if (!*s)
		return (1);
	if (*s != *end)
		return (0);
	return (_palindrome(s + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to char array
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (_palindrome(s, &s[len - 1]));
}
