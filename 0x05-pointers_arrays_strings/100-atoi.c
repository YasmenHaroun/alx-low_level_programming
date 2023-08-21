#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: input string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	int negative = 0;
	int result = 0;
	int temp = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-') 
			negative = 1;
		else if ((s[i] <= '9') && (s[i] >= '0'))
		{	
			result *= 10;
			result -= (s[i] - '0');
		}
		else
			result = 0;
		i++;
	}
	if (negative == 1)
		result *= -1;
	return (result);
}
