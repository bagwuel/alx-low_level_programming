#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to matrix
 * @size: dimensions of the matrix
 */

void print_diagsums(int *a, int size)
{
	int row = 0, col = size, major_d = 0, minor_d = 0;

	while (row < size)
	{
		major_d += a[row * size + row];
		minor_d += a[col * size - col];
		row++;
		col--;
	}
	printf("%d, %d\n", major_d, minor_d);
}
