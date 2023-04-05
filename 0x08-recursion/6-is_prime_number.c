#include "main.h"

/**
 * _prime - checks an integer if its a prime number
 * @y: number to be checked
 * @x: factor to be checked against y
 *
 * Return: 1 if y is prime, 0 otherwise
 */

int _prime(int y, int x)
{
	int z;

	z = y / 2;
	if (y % x == 0)
		return (0);
	if (x >= z)
		return (1);
	return (_prime(y, x + 2));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: number to be checked
 *
 * Return: 1 n is a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 2 || (n % 2 == 0 && n != 2))
		return (0);
	return (_prime(n, 3));
}
