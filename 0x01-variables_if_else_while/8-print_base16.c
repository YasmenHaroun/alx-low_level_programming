#include <stdio.h>

/**
 * main - Prints hexadecimal numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;
	char c;
	
	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (c = 'a'; c < 'E'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
