#include <stdio.h>

/**
 * main - prints all the numbers of base
 * 16 in lowercase, followed by a new line.
 * using the putchar function
 * Return: (0)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 16)
	{
		if (num < 10)
			putchar(num + 48);
		else
			putchar(num + 87);
		num++;
	}
	putchar('\n');
	return (0);
}
