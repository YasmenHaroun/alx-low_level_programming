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

	for (i = 0; s[i] != '\0'; i++)
	{
		s ++;
		if (s[i] == c)
			return (s);	
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
