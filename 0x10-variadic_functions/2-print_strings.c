#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: to be printed between the strings
 * @n: number of agrs
 * @...: rest of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *p;

	va_start(strings, n);
	i = 0;
	while (i < n)
	{
		p = va_arg(strings, char *);
		if (p == NULL)
			printf("nil");
		else
			printf("%s", p);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strings);
}
