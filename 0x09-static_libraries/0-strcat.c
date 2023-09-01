#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: input string one
 * @dest: input string two
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[(i + j)] = src[j];
	}
	dest[(i + j)] = '\0';

	return (dest);
}
