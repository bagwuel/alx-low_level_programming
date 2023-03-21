#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * separated by comma, followed by a space.
 * Return: (0)
 */

int main(void)
{
	long num1;
	long num2;
	long fib;
	int i;

	num1 = 1;
	num2 = 2;
	i = 0;
	printf("%ld, %ld", num1, num2);
	while (i < 50 - 2)
	{
		printf(", ");
		fib = num1 + num2;
		printf("%ld", fib);
		num1 = num2;
		num2 = fib;
		i++;
	}
	printf("\n");
	return (0);
}
