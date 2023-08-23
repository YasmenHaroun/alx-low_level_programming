#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 * @str: input string
 *
 * Return: char
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i) == ' ' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '?' || s[i] == '"' || s[i] == ')' || s[i] == '(' || s[i] == '{' || s[i] == '}' || s[i] == '!')
		{		
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= s[i] - 32;
			}
		}
	}
	return (str);
}
