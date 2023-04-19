#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - returns pointer to the correct function for the operation
 * @s: operator passed as argument
 *
 * Return: pointer to a function that that takes two int and return an int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (s != NULL && ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
