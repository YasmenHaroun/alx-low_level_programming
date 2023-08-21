#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array name
 * @n: number of elements of the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if ( n != 1)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}
	}
	else
	{
		printf("\n");
		printf("\n";
		printf("\n");
	}
}

