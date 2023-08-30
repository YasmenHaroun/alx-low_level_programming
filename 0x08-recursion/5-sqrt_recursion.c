#include "main.h"

/**
 * _sqrt_recursion - return natural square root
 * @n: input number
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else if (n * n == n)
		return (n);
	else
		_sqrt_recursion(n - 1);
	return (0);
}
