#include "main.h"

/**
 * _puts - prints a string
 *@str: input string
 *
 * Return: void
 */
void _puts(char *str)
{
	int length, i;

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
