#include <stdio.h>

/**
 * main - entry piont
 *
 * Return: void
 */
int main(void)
{
	int count = 1;
	
	printf("1");
	for (count < 50)
	{
		count += count;
		printf("%d", count);
	}
	printf("\n");

	return (0);
}
