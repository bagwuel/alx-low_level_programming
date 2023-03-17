#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * from 0 to 99, separated by a space,
 * using the putchar function
 * Return: (0)
 */
int main(void)
{
	int num1;
	int num2;

	num1 = 0;
	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			putchar(num1 / 10 + 48);
			putchar(num1 % 10 + 48);
			putchar(' ');
			putchar(num2 / 10 + 48);
			putchar(num2 % 10 + 48);
			if (num1 < 98)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
