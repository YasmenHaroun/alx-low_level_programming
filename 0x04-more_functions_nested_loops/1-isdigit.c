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
