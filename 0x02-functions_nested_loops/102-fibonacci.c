#include <stdio.h>

/**
 * main - entry piont
 *
 * Return: void
 */
int main(void)
{
	int count = 1;
	int sum = 0;
	
	printf("1");
	while (count < 50)
	{
		sum += count;
		count++;
		printf("%d", sum);
	}
	printf("\n");

	return (0);
}
