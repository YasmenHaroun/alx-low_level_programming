#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 * @s: input string
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] -= 32;
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
			|| s[i] == ';' || s[i] == '.' || s[i] == '?' || s[i] == '"'
			|| s[i] == ')' || s[i] == '(' || s[i] == '{' || s[i] == '}'
			|| s[i] == '!')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
	}
	return (s);
}
