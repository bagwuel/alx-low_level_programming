#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to be reversed
 * @n: length of array a
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int half_n;

	i = 0;
	half_n = n / 2;
	while (i < half_n)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}
}
