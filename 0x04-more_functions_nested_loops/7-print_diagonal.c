#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the diagonal is printed
 */

void print_diagonal(int n)
{
	int i;
	int temp;

	temp = n;
	if (n > 0)
	{
		while (n-- > 0)
		{
			i = temp - n;
			while (--i > 0)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
