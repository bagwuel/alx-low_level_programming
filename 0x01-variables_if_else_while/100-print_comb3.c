#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * using the putchar function
 * Return: (0)
 */
int main(void)
{
	int num1;
	int num2;

	num1 = 0;
	while (num1 < 9)
	{
		num2 = num1 + 1;
		while (num2 < 10)
		{
			putchar(num1 + 48);
			putchar(num2 + 48);
			if (num1 < 8)
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
