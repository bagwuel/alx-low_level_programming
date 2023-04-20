#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 * @...: rest of the arguments
 *
 * Return: 0 if n = 0, sum of parameters otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(numbers, int);
		i++;
	}
	va_end(numbers);
	return (sum);
}
