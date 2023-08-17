#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: input number
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j = 0;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			while (j < (size - i))
			{
				_putchar(' ');
				j++;
			}
			while ((j > (size - i)) && (j < size))
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
