#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to printed in binary
 */

void print_binary(unsigned long int n)
{
	int i = 63, value = 0;
	unsigned long int right_most_bit;

	while (i >= 0)
	{
		right_most_bit = n >> i;
		if (right_most_bit & 1)
		{
			_putchar('1');
			value = 1;
		}
		else if (value == 1)
		{
			_putchar('0');
		}
		i--;
	}
	if (value == 0)
		_putchar('0');
}
