#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * If n is greater than 15 or less than 0
 * the function should not print anything
 * @n: number of times table to be printed
 */

void print_times_table(int n)
{
	int row;
	int col;
	int rslt;
	int temp[3];
	int i;

	if (n < 0 || n > 15)
		return;
	row = 0;
	while (row <= n)
	{
		_putchar('0');
		col = 1;
		while (col <= n)
		{
			rslt = row * col;
			i = 0;
			do {
				temp[i] = rslt % 10;
				rslt /= 10;
				i++;
			} while (rslt > 0);
			_putchar(',');
			_putchar(' ');
			if (i == 2)
				_putchar(' ');
			if (i == 1)
			{
				_putchar(' ');
				_putchar(' ');
			}
			while (--i >= 0)
				_putchar(temp[i] + '0');
			col++;
		}
		_putchar('\n');
		row++;
	}
}
