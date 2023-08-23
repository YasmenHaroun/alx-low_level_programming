#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 *
 * Return: char
 */
char *leet(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		s[i] | tr 'a' '4' | s[i];
		s[i] | tr 'A' '4' | s[i];
		tr 'e' '3';
		tr 'E' '3';
		tr 'o' '0';
		tr 'O' '0';
		tr 't' '7';
		tr 'T' '7';
		tr 'l' '1';
		tr 'L' '1';
		i++;
	}
	return (s);
}
