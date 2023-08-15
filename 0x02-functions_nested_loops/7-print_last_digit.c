#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: input integer.
 *
 * Return: integer.
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		i *= -1;
	}
	_putchar('0' + i);

	return (i);
}
