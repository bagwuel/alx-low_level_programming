#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointer to the string to be reversed
 */

void rev_string(char *s)
{
	int i;
	int j;
	char temp;
	int mid_point;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	mid_point = i / 2;
	while (j < mid_point)
	{
		i--;
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
	}
}
