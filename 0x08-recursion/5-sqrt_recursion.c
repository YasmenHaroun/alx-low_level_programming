#include "main.h"

/**
 * _sqrt_recursion - return natural square root
 * @n: input number
 *
 * Return: integer
 */
int sqrt_2inputs( int num, int n)
{
	if (n <= 0)
                return (-1);
	else if (n == 1)
		return (1);
        else if (n * n == num)
                return (n);
	else
		return (sqrt_2inputs(num, n-1));
}
int _sqrt_recursion(int n)
{
	return (sqrt_2inputs(n, n / 2));
}

