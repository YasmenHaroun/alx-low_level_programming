#include <stdio.h>

/**
 * main - Prints the alphabetic in lower except q and e
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' || c != 'q')
		{
		putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
