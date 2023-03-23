#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the diagonal is printed
 */

void print_diagonal(int n)
{
	int row;
	int col;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	row = 0;
	while (row < n)
	{
		col = 0;
		while (col < row)
		{
			_putchar(' ');
			col++;
		}
		_putchar('\\');
		_putchar('\n');
		row++;
	}
}
