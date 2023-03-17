#include <stdio.h>

/**
 * main - prints the lowercase alphabet
 * in reverse, followed by a new line,
 * using the putchar function
 * Return: (0)
 */
int main(void)
{
	char a;

	a = 'z';
	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
