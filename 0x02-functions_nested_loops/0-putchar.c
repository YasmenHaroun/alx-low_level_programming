#include <stdio.h>

/**
 * main -  prints _putchar
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
	return (0);
}
