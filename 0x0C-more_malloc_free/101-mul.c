#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * error - prints Error with exit code 98
 */

void error(void)
{
	int i;
	char *err = "Error";

	i = 0;
	while (err[i])
		_putchar(err[i++]);
	_putchar('\n');
	exit(98);
}

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

/**
 * _multiply - multipies two numbers
 * @p: pointer to buffer to be returned
 * @s1: first number
 * @s2: second number
 * @l1: length of first number
 * @l2: length of second number
 *
 * Return: pointer to result; 0 on failure
 */

char *_multiply(char *p, char *s1, char *s2, int l1, int l2)
{
	int i = l2, j, k, n1, n2, temp;
	char *sum, *res;

	sum = malloc(l1 + l2 + 1);
	if (!sum)
		return (0);
	while (i-- > 0)
	{
		n2 = s2[i] - '0';
		j = l1;
		k = 0;
		temp = 0;
		res = malloc(l1 + (l2 - i) + 1);
		if (!res)
		{
			free(sum);
			return (0);
		}
		while (k < l2 - i - 1)
			res[k++] = '0';
		while (j-- > 0)
		{
			n1 = s1[j] - '0';
			res[k++] = ((n1 * n2) + temp) % 10 + '0';
			temp = ((n1 * n2) + temp) / 10;
		}
		if (temp > 0)
			res[k++] = temp + '0';
		res[k] = '\0';
		rev_str(res, k);
			 p = infinite_add(sum, res, p, l1 + l2 + 1);
			 strcpy(sum, p);
		free(res);
	}
	free(sum);
	return (p);
}

/**
 * isnegative - checks if a number is negative
 * @s: number to be checked
 *
 * Return: s if positive; s + 1 if negative
 */

char *isnegative(char *s)
{
	if (*s == '-')
		return (++s);
	return (s);
}

/**
 * main - prints the result of multiplication of two numbers
 * @argc: length of argv array
 * @argv: input vector
 *
 * Return: 0 if success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	char *s1, *s2, *p;
	int i = 0, j = 0, mem = 0, sign = 1;

	if (argc != 3)
		error();
	if (argv[1][0] == '-')
		sign *= -1;
	if (argv[2][0] == '-')
		sign *= -1;
	s1 = isnegative(argv[1]);
	s2 = isnegative(argv[2]);
	while (s1[i])
	{
		if (s1[i] < '0' || s1[i] > '9')
			error();
		i++;
	}
	while (s2[j])
	{
		if (s2[j] < '0' || s2[j] > '9')
			error();
		j++;
	}
	if (i == 0 || j == 0)
		error();
	mem = i + j + 1;
	p = malloc(mem);
	if (!p)
		return (1);
	p = _multiply(p, s1, s2, i, j);
	if (!p)
		return (1);
	i = 0;
	if (sign == -1)
		_putchar('-');
	while (p[i])
		_putchar(p[i++]);
	_putchar('\n');
	free(p);
	return (0);
}
