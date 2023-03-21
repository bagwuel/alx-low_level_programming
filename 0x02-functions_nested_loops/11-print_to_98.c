#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * from n to 98, followed by a new line.
 * @n: number to print from unitl 98
 */

void print_to_98(int n)
{
	int end;

	end = 98;
	if (n > end)
	{
		n *= -1;
		end *= -1;
	}
	while (n <= end)
	{
		if (end == -98)
			printf("%d", n * -1);
		else
			printf("%d", n);
		if (n != end)
			printf(", ");
		n++;
	}
	printf("\n");
}
