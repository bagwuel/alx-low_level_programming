#include "main.h"
#include <stdio.h>

/**
 * add - adds two numbers together
 * @a: first number
 * @b: secon number
 * Return: a + b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - finds the difference between two numbers
 * @a: first number
 * @b: second number
 * Return: a - b
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: a * b
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divide two numbers
 * @a: first number
 * @b: second number
 * Return: a / b
 */

int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * mod - finds the modulo two numbers
 * @a: first number
 * @b: second number
 * Return: a % b
 */

int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
