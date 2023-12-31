#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array name
 * @n: number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
