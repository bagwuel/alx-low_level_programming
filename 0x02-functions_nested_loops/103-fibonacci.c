#include <stdio.h>

/**
 * main - finds and prints the sum of all even fibonacci terms
 * not exceeding 4,000,000 followed by a new line
 * Return: (0)
 */

int main(void)
{
	long num1;
	long num2;
	long fib;
	long sum;

	num1 = 1;
	num2 = 2;
	sum = num1 + num2;
	fib = 0;
	while (fib <= 4000000)
	{
		fib = num1 + num2;
		if (fib < 4000000)
			sum += fib;
		num1 = num2;
		num2 = fib;
	}
	printf("%ld\n", sum);
	return (0);
}
