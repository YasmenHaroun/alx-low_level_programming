#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring
 * @haystack: string we search in
 * @needle: substring we search for
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;
	int flag = 0;
	char *origin;

	p = haystack;
	origin = haystack;
	if (!*needle) /* empty needle */
		return (haystack);
	while (*needle)
	{
		while (*haystack)
		{
			if (*needle == *haystack)
			{
				if (flag == 0)
				{
					*p = *haystack;
					flag = 1;
				}
				else
					flag = 1;
			}
			else
			{
				flag = 0;
			}
			haystack++;
		}
		needle++;
	}
	if (flag == 1)
		return (p);
	else
		return (origin);
}
