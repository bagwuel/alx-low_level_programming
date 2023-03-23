#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * using the character # to print the triangle
 * If size is 0 or less, the function should print only a new line
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int row;
	int col;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	row = 0;
	while (row < size)
	{
		col = 0;
		space = 1;
		while (col < size)
		{
			if (space < size - row)
				_putchar(' ');
			else
				_putchar('#');
			space++;
			col++;
		}
		_putchar('\n');
		row++;
	}
}
