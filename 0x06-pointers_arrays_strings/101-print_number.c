#include "main.h"

/**
 * print_number - prints integer
 * @n: input integer
 *
 * Return: void
 */
void print_number(int n)
{
	int num = n;
	int count = 1; 
	int multiples_10 = 1;

	if (n < 0)
		_putchar('-');

	while (num / 10 != 0)
	{
		count++;
		num /= 10;
		multiples_10 *= 10;
	}
	for (i = count - 1; i != 0; i--)
	{
		_putchar((n /  multiples_10) + '0');
		multiplies_10 /= 10;
	}
}
