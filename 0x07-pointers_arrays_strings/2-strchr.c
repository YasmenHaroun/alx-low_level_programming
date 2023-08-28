#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * @s: string to search in
 * @c: charter to search for
 *
 * Return: pionter
 */
char *_strchr(char *s, char c)
{
	int i;
	int *p;

	p = &s;
	for (i = 0; s[i] != '\0'; i++)
	{
		p += i;
		if (s[i] == c)
			break;
	}
	return (p);
}
