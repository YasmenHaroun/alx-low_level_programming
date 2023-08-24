#include "main.h"

/**
 * rot13 - encodes using rot13
 * @s: input string
 *
 * Return: char
 */
char *rot13(char *s)
{
	int i, j;
	char input[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char output[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
			if (s[i] == input[j])
				s[i] = output[j];
	}
	return (s);
}
