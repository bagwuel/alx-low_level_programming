#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * separated by comma, followed by a space ,
 * Return: (0)
 */

int main(void)
{
	unsigned long num1;
	unsigned long num2;
	unsigned long fib;
	int i;

	num1 = 1;
	num2 = 2;
	i = 0;
	printf("%lu, %lu", num1, num2);
	while (i < 98 - 2)
	{
		printf(", ");
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		printf("%lu", fib);
		i++;
	}
	printf("\n");
	return (0);
}
