#include <stdio.h>

/**
 * main - Prints hexadecimal numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;
	char c = 'a';
	
	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar((i % 10) + '0');
		}
		else if ( i < 16)
		{
			putchar(c);
			c++;
		}
	}
	
	putchar('\n');
	return (0);
}
