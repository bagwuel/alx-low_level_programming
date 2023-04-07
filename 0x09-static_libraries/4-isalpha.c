#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: character to be checked
 *
 * Return: 1 if c is an alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
