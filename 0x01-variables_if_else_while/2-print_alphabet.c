#include <stdio.h>

/**
 * main - Prints letter
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i = 0;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	while (i < 26)
	{
		putchar(alphabet[i]);
	}
	putchar ('\n');
	return (0);
}
