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
	while (*s)
	{
		if (s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
