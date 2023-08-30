#include "main.h"

/**
 * sqrt_2inputs - funcation take offset
 * @n: input number
 * @num: input number
 * 
 * Return: integer
 */
int sqrt_2inputs(int num, int n)
{
	if (n * n == num)
		return (n);
	else
		return (sqrt_2inputs(num, n + 1));
}
/**
 * _sqrt_recursion - return natural square root
 * @n: input number
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n <= 0)
		return (-1);
	return (sqrt_2inputs(n, 2));
}

