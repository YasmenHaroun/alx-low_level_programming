#include "main.h"

/**
 * _strpbrk - locates the first occurrence in s of any of bytes in accept
 * @s: search in string
 * @accept: the bytes we search for
 *
 * Return: first occurrance of any byte of accept
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] != *s)
				s++;
			else
				return (s - 1);
	}
	return (NULL);
}
