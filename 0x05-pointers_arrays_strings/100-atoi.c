#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: input string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int *temp;
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] <= 57) && (s[i] >= 48))
		{
			if (i != 0)
			{
				if (((s[i - 1]) == 43) || ((s[i - 1]) == 45))
					temp[i - 1] = s[i - 1];
			}
			temp[i] = s[i];
		}
	}
}
