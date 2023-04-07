#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: size of argv array
 * @argv: array of arguments
 *
 * Return: 1 if argc is not 3, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
