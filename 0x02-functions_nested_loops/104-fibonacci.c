#include <stdio.h>

/**
  * main - Prints the first 100 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
	int i = 0;
	long previous = 0, current = 1;
	long sum = 0;

	while (i < 98)
	{
		sum = previous + current;
		previous = current;
		current = sum;
		printf("%ld, ", sum);
		i++;
	}

	printf("\n");
	return (0);
}
