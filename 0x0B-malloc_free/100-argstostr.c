#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: length of av array
 * @av: argument array
 *
 * Return: NULL if ac is 0 or av is NULL or fails;
 * pointer to new string otherwise
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int lsum;
	char *p;

	if (ac < 1 || !av)
		return (NULL);
	i = 0;
	lsum = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		lsum += j + 1;
		i++;
	}
	p = malloc(sizeof(char) * lsum + 1);
	if (!p)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ac)
	{
		while (*(*(av + i)))
		{
			*(p + j++) = *(*(av + i));
			*(av + i) += 1;
		}
		*(p + j++) = '\n';
		i++;
	}
	*(p + j) = '\0';
	return (p);
}
