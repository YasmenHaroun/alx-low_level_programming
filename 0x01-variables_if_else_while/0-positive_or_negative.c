#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * program to check randam value number in number
 * positive or
 * negative or
 * zero
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	/*Generate random numer*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*check random number value*/
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}

	return (0);
}
