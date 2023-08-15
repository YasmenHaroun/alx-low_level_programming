#include <stdio.h>

/**
 * main - entry piont
 *
 * Return: void
 */
int main(void)
{
	int i = 0;
	long sum = 0;
	long j = 1, k = 2;

	while (i < 4000000)
	{
		k += j;
		j = k - j;
		if (k % 2 == 0)
		{
			sum += k;
		}
		++i;
	}
	printf("%ld\n", sum);

	return (0);
}
