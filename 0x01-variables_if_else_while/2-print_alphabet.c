#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: (0)
 */
int	main(void)

{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
