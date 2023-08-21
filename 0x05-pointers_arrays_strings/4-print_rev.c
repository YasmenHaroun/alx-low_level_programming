#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: input string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length;

	length = strlen(s);
	while (length != 0)
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar('\n');
}
