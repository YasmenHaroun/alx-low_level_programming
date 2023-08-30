#include "main.h"

/**
 * factorial - returns the factorial of number
 * @n: input number
 *
 * Return: integer number
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
