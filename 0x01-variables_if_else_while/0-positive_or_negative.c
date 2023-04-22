#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the last digit of a randomly generated number.
 * description - and weather it is greater than 5, less than 6, or 0.
 *
 * return: 0 (success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
