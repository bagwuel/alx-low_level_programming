#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, then in
 * uppercase followed by a new line.
 * Return: (0)
 */
int     main(void)

{
	char lower;
	char upper;

	lower = 'a';
	upper = 'A';
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
