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
					*p = *haystack;/*first occurance*/
					flag = 1;
					break;
				}
				else
				{
					flag = 1; /*continue sequence*/
					break;
				}
			}
			else
			{	
				if (flag == 1)
					return (origin);
			}
			haystack++;
		}
		needle++;
	}
	return (p);
}
