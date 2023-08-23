#include "main.c"

/**
 * rot13 - encodes using rot13
 * @str: input string
 *
 * Return: char
 */
char *rot13(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		tr ('a-m', 'A-M', 'n-z', 'N-Z') ('n-z', 'N-Z', 'a-m', 'A-M');
		i++;
	}
	return (str[i]);
}
