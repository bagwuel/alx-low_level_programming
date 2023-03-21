#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int row;
	int col;
	int rslt;

	row = 0;
	while (row <= 9)
	{
		_putchar('0');
		col = 1;
		while (col <= 9)
		{
			rslt = row * col;
			_putchar(',');
			_putchar(' ');
			if (rslt / 10 == 0)
				_putchar(' ');
			else
				_putchar(rslt / 10 + '0');
			_putchar(rslt % 10 + '0');
			col++;
		}
		_putchar('\n');
		row++;
	}
}
