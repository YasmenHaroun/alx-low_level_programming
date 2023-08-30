#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	char *c = *s;
	int i;

	if (*c != '\0')
	{
		c++;
		_strlen_recursion(c);
	}
	i = *c - *s;
	return (i);
}
