#include "main.h"

/**
  * _isupper - checks for uppercase character
  * @c: input charcter ASCII value
  *
  * Return: 1 for uppercase letter else zero
  */
int _isupper(int c)
{

	if ((c <= 90) && (c >= 65))
	{
		return (1);
	}

	return (0);
}
