#include "main.h"

/**
  * _isalpha - Checks if letter
  * @c: The character to be checked
  *
  * Return: 1 for letter or 0 anything else
  */
int _isalpha(int c)
{
	if (((c <= 90) && (c >= 65)) || ((c <= 122) && (c >= 97)))
	{
		return (1);
	}

	return (0);
}
