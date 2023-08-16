#include <stdio.h>

/**
  * main - Prints the first 100 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
	int i = 0;
	long previous = 1, current = 2;
	long sum = 0;

	printf("1, 2, ");
	while (i < 94)
	{
		sum = previous + current;
		previous = current;
		current = sum;
		printf("%ld, ", sum);
		++i;
	}

	printf("\n");
	return (0);
}
