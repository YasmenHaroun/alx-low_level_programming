#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @src: input string1
 * @dest: input string2
 * @n: number of bytes to use from input1
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		if (src[j] != '\0')
			dest[(i + j)] = src[j];
		else
			dest[(i + n)] = '\0';
		break;
	}
	return (dest);
}
