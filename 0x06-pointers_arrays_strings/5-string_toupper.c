#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @s: input string
 *
 * Return: char
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] <= 122) && (s[i] >= 97))
			s[i] -= 32;
	}
	return (s);
}
