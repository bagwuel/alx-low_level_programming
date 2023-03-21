#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * separated by comma, followed by a space ,
 * Return: (0)
 */

int main(void)
{
	unsigned int num1;
	unsigned int num2;
	int fib;
	int i;

	num1 = 1;
	num2 = 2;
	i = 0;
	printf("%u, %u", num1, num2);
	while (i < 98 - 2)
	{
		printf(", ");
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		printf("%u", fib);
		i++;
	}
	printf("\n");
	return (0);
}
