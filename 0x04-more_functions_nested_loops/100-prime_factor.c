#include "main.h"

/**
 * main - find the largest prime factor of the number 61285247514
 *
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long m = 612852475143;
	long i = 3;

	while (i < n)
	{
		if (n % i == 0)
		{
			n /= i;
			i += 2;
		}
	}
	printf("%ld\n", n);
	return (0);
}
