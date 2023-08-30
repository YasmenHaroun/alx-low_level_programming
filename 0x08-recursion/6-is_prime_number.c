#include "main.h"
/**
 * check_reminder - check reminder if 0
 * @n: input number
 * @c: counter
 * Return: 1 if prime else 0
 */
int check_reminder(int n, int c)
{
	if (n % c != 0 && c != n)
		return (check_reminder(n, c + 2));
	else if (c == n)
		return (1);
	else
		return (0);
}
/**
 * is_prime_number - return 1 if prime number else 0
 * @n: input number
 *
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 ||  n == 1)
		return (0);
	else
		return (check_reminder(n, 3));
}
