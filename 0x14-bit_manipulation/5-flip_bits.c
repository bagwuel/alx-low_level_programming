#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to
 * flip to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	int count = 0, i = 63;

	while (i >= 0)
	{
		if ((diff >> i) & 1)
			count++;
		i--;
	}
	return (count);
}
