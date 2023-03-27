#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to the string to be printed
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i /= 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
