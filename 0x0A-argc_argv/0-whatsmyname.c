#include "main.h"
#include <stdio.h>

/**
 * main - prints a program's name, followed by a new line.
 * @argc: size of argv array
 * @argv: array of arguments
 *
 * Return: always (0)
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
