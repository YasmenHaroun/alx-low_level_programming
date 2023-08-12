#include <stdio.h>

/**
 * main - prints all possible combinations of 3-digit numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;
	int j = 1;
	int k = 2;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10 ; j++)
		{
			for (k = 2; k < 10 ; k++)
			{
				if (j > i && k > j)
				{
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					putchar((k % 10) + '0');
					if (i == 7 && j == 8 && k == 9)
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
	}

	putchar ('\n');
	return (0);
}
