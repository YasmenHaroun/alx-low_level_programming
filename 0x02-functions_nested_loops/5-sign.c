#include "main.h"

/**
 * print_sign - checks the sign of integer
 * @n: The number to check it's sign
 *
 * Return: 1 if positive, 0 if zer0, -1 if negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
