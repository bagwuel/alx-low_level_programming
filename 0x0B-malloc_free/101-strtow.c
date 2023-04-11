#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * matrixcpy - copies strings into a matrix
 * @p: pointer to vector
 * @str: pointer to string
 */

void matrixcpy(char **p, char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (*(p + j))
	{
		while (str[i])
		{
			if ((i == 0 && str[i] > 32) || (str[i] > 32 && str[i - 1] <= 32))
			{
				k = 0;
				while (str[i] > 32)
					*(*(p + j) + k++) = str[i++];
				*(*(p + j) + k) = '\0';
				break;
			}
			i++;
		}
		j++;
	}
}

/**
 * wordcounter - counts the number of words in a string
 * @str: string to be counted
 * Return: number of words
 */

int wordcounter(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (i == 0 && str[i] > 32)
			words++;
		if (str[i] <= 32 && str[i + 1] > 32 && str[i])
			words++;
		i++;
	}
	return (words);
}

/**
 * strtow - splits a string into words.
 * @str: string to be split
 *
 * Return: NULL if str is NULL or str is empty string or function fails;
 * pointer to 2D array otherwise
 */

char **strtow(char *str)
{
	int i = 0, j = 0, words, char_counter;
	char **p;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = wordcounter(str);
	if (words == 0)
		return (NULL);
	p = malloc(sizeof(char *) * (words + 1));
	if (!p)
		return (NULL);
	*(p + (words + 1)) = NULL;
	while (j < words)
	{
		while (str[i])
		{
			if ((i == 0 && str[i] > 32) || (str[i] > 32 && str[i - 1] <= 32))
			{
				char_counter = 0;
				while (str[i] > 32)
				{
					char_counter++;
					i++;
				}
				*(p + j) = malloc((sizeof(char) * char_counter) + 1);
				if (!*(p + j))
				{
					while (--j >= 0)
						free(*(p + j));
					free(p);
					return (NULL);
				}
				break;
			}
			i++;
		}
		j++;
	}
	matrixcpy(p, str);
	return (p);
}
