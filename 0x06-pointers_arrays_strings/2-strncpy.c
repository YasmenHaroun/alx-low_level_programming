#include "main.h"

/**
 * _strncpy - copies a string like strncpy
 * @src: source to be copied
 * @dest: destination of copy
 * @n: number of bytes
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (src[i] != '\0')
				dest[i] = src[i];
			else if (src[i] != '\0')
				dest[i] = '\0';
		}
	}
	return (dest);
}
