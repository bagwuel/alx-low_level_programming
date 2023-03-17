#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the
 * variable n each time it is executed.
 * print out some predefined massages if the last
 * digit of n is within certain ranges
 * Return: (0)
 */
int	main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		last_digit = (n * -1) % 10;
	else
		last_digit = n % 10;
	printf("Last digit of %d is %d and is ", n, last_digit);
	if (last_digit == 0)
		printf("0\n");
	if (last_digit > 5)
		printf("greater than 5\n");
	if (last_digit < 6 && last_digit != 0)
		printf("less than 6 and not 0\n");
	return (0);
}
