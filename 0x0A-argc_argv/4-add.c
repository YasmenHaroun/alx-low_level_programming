#include "main.h"

/**
 * _isdigit - Check if input is digit
 * @c: input number
 *
 * Return: 1 if input is digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

/**
 * is_num - check if input is number
 * @s: input string
 * Return: zero if input is number else 1
 */
int is_num(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!_isdigit(s[i]))
			return (0);
	}
	return (1);
}

/**
 * main - main of program
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (is_num(argv[i]))
				result += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	return (0);
}
