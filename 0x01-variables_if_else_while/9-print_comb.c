#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar ('\n');

	return (0);
}
