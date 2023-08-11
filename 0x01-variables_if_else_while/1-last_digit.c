#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print last digit of number
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	int last_d;

	/*Generate random numer*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*print last digit*/
	last_d = n % 10;
	if (last_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
	}
	else if (last_d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_d);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d);
	}
	return (0);
}



