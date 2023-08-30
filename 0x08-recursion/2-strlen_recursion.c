#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		s++;
		_strlen_recursion(s);
	}
	return (i);
}
