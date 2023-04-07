#include "main.h"
#include <stdio.h>

/**
 * main- prints all arguments it receives
 * @argc: size of argv array
 * @argv: array of arguments
 *
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
