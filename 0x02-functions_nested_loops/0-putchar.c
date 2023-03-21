#include "main.h"
/**
 * main - prints _putchar, followed by a new line.
 * Return: (0)
 */
int main(void)
{
	int i;
	char str[] = {"_putchar"};

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
