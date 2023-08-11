#include <stdio.h>

/**
 * main - Prints digits from 0to9
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
