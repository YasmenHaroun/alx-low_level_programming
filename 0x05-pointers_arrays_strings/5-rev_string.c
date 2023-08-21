#include "main.h"

/**
 * rev_string -  reverse a string
 * @s: input string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	int l, i;

	l = strlen(s);
	for (i = 0; i < (l / 2); i++)
	{
		temp = s[(l - i - 1)];
		s[(l - i - 1)] = s[i];
		s[i] = temp;
	}
}
