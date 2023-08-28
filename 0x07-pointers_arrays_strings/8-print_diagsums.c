#include "main.h"

/**
 * print_diagsums - print diagonals sum of square matrix
 * @a: pionter to matrix
 * @size: size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0, j = 1; i < size; i++, j++)
	{
		sum1 += a[(size + 1) * i]; /*a[i][i]*/
		sum2 += a[(size - 1) * j];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
