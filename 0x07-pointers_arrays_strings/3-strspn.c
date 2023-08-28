#include "main.h"

/**
 * _strspn -  function returns the number of characters in the initial segment
 * @s: string to search in
 * @accept: pattern to search for
 *
 * Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0' && *s == accept[j]; j++)
			count++;
		if (accept[j] == '\0')
			return (count);
		s++;
	}
	return (count);
}
