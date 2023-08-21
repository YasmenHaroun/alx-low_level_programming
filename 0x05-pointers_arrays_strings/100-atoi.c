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
	int sign = -1;
	int result = 0;
	int flag = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if ((s[i] <= '9') && (s[i] >= '0'))
		{
			result *= 10;
			result -= (s[i] - '0');
			flag = 1;
		}
		else if (flag == 1)
			break;

		i++;
	}
	result *= sign;
	return (result);
}
