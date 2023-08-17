#include "main.h"

/**
 * print_diagonal - print_diagonal
 * @n: input integer
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n ; i++)
		{
			for (j = 0; j < --i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
