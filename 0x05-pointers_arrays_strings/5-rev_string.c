#include "main.h"

/**
 * rev_string -  reverse a string
 * @s: input string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char temp_str[] = s;
	int l;
	int i = 0;

	l = strlen(s);
	while (l != 0)
	{
		temp_str[i] = s[l];
		l--;
		i++;
	}
	strcpy(s, temp_str);
}
