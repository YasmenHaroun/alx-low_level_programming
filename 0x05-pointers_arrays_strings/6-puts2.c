#include "main.h"

/**
 * puts2 - prints every other character of a string, start by first character
 * @str: input string
 *
 * Return: void
 */
void puts2(char *str)
{
	int len;
	int i = 0;

	len = strlen(str);
	while (i < len)
	{
		_putchar(str[i])
		i += 2;
	}
	_putchar('\n');
}
