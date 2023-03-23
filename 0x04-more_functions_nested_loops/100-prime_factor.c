#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143, followed by a new line.
 * Return: (0)
 */

int main(void)
{
	int i;
	long num;
	long lp_fact;

	num = 612852475143;
	while (num % 2 == 0)
	{
		lp_fact = 2;
		num /= 2;
	}
	i = 3;
	while (i <= num / 2)
	{
		while (num % i == 0)
		{
			lp_fact = i;
			num /= i;
		}
		i += 2;
	}
	printf("%ld\n", lp_fact);
	return (0);
}
