#include "main.h"

/**
 * _sqrt - checks if x is the square root of y
 * @y: num
 * @x: potential sqrt of y
 *
 * Return: the natural sqrt of y if y has one, or -1 if otherwise
 */

int _sqrt(int y, int x)
{
	if (x * x > y)
		return (-1);
	if (x * x == y)
		return (x);
	return (_sqrt(y, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number whose square root is to be found
 *
 * Return: square root if n has a natural square root, -1 otherwise.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(n, 2));
}
