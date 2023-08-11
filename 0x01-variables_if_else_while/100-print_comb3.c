#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;
	int j = 1;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10 ; j++)
		{
			if (j > i)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				if (i == 8 && j == 9)
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar ('\n');
	return (0);
}
