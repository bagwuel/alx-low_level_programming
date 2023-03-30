#include "main.h"
#include <stdio.h>

/**
 * rev_str - reverse a string
 * @str: pointer to string
 * @len: length of str
 */

void rev_str(char *str, int len)
{
	int i;
	int half_len;
	char temp;

	i = 0;
	half_len = len / 2;
	while (i < half_len)
	{
		temp = str[len - 1];
		str[len - 1] = str[i];
		str[i] = temp;
		i++;
		len--;
	}
}

/**
 * infinite_add - adds two numbers.
 * @n1: number to be added
 * @n2: number to be added
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, temp = 0, sum;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > size_r || j > size_r)
		return (0);
	i--;
	j--;
	while (k < size_r - 1)
	{
		sum = temp;
		if (i >= 0)
			sum += n1[i] - 48;
		if (j >= 0)
			sum += n2[j] - 48;
		if (i < 0 && j < 0 && temp == 0)
			break;
		r[k] = sum % 10 + 48;
		temp = sum / 10;
		i--;
		j--;
		k++;
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || temp)
		return (0);
	rev_str(r, k);
	return (r);
}
