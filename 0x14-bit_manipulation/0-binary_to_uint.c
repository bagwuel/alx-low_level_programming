#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to binary
 * Return: 0 if b is NULL or contains chars no 1 or 0,
 * converted number otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		deci = deci * 2 + ((*b) - 48);
		b++;
	}
	return (deci);
}
