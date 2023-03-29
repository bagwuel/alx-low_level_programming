#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	int i;
	int j;

/**
 * struct encoder - A struct for encoding characters
 *
 * @uc: The uppercase character to be encoded
 * @lc: The lowercase character to be encoded
 * @code: The integer code for the encoded character
 */
	struct encoder
	{
		char uc;
		char lc;
		int code;
	};

	struct encoder codes[5] = {
	{'A', 'a', 4},
	{'E', 'e', 3},
	{'O', 'o', 0},
	{'T', 't', 7},
	{'L', 'l', 1},
	};
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if ((str[i] == codes[j].uc) || (str[i] == codes[j].lc))
			{
				str[i] = codes[j].code + 48;
			}
			j++;
		}
		i++;
	}
	return (str);
}
