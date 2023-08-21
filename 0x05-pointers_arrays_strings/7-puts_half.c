#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: input string
 *
 * Return:void
 */
void puts_half(char *str)
{
	int len;
	int i;

	len = strlen(str);
	if ((len / 2) != 0)
	{
		i = (len -1) / 2;
	}
	else
	{
		i = len /  2;
	}
	while (i < len)
	{
		_putchar(str[(i+1)]);
		i++;
	}
	_putchar('\n');
}
