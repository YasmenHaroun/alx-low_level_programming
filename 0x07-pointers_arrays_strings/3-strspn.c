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
	int flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; flag != 1 && accept[j] != '\0'; j++)
			if (s[i] != accept[j])
				continue;
			else
			{
				count++;
				flag = 1;	
			}
	}
	return (count);
}
