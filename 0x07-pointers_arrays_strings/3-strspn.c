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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}
