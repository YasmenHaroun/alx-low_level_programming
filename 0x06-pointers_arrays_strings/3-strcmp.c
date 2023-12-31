#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input string1
 * @s2: input string2
 *
 * Return: -1 less, 0 same, 1 more
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (s1[i] != '\0' && s2[i] != '\0'); i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
