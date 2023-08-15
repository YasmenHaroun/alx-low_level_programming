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
	int previous_sum;

	printf("1, ");
	while (count < 50)
	{
		previous_sum = sum;
		sum += pervious_sum;
		count++;
		printf("%d, ", sum);
	}
	printf("\n");

	return (0);
}
