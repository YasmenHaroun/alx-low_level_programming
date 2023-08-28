#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory pointed to by s
 * @s: pionter
 * @b: constant bytes to fill memory with
 * @n: number bytes of the memory area
 *
 * Return: pointer to memeory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
