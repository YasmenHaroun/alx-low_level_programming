#include <stdio.h>

/**
 * main - Prints digits from 0to9
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;
	char c;
	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
	}
	if (i == 10)
	{
		for (c = 'a'; c <= 'E'; c++)
		{
			putchar(c);
		}
	}

	putchar('\n');
	return (0);
}
