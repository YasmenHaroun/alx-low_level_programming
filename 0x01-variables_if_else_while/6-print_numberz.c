#include <stdio.h>

/**
 * main - Prints digits from 0to9
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
	}

	putchar('\n');

	return (0);
}
