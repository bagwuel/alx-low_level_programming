#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * using the putchar function
 * Return: (0)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	num1 = 0;
	while (num1 < 8)
	{
		num2 = num1 + 1;
		while (num2 < 9)
		{
			num3 = num2 + 1;
			while (num3 < 10)
			{
				putchar(num1 + 48);
				putchar(num2 + 48);
				putchar(num3 + 48);
				if (num1 < 7)
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
