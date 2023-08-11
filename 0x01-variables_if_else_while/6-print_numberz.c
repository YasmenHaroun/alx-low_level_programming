#include <stdio.h>

/**
 * main - Prints digits from 0to9
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
