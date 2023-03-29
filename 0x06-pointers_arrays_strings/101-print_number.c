#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}
	if (num / 10)
		print_number(num / 10);
	_putchar(num % 10 + 48);
}
