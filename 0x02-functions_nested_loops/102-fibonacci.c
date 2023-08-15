#include <stdio.h>

/**
 * main - entry piont
 *
 * Return: void
 */
int main(void)
{
	int count = 1;
	int sum = 1;

	printf("1, ");
	while (count < 50)
	{
		sum += sum;
		count++;
		printf("%d, ", sum);
	}
	printf("\n");

	return (0);
}
