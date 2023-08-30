#include "main.h"

/**
 * _puts_recursion - prints a string in reverse
 * @s: input string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
	}
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s += i;
	_putchar(*s);
	s--;
	_puts_recursion(s);
}
