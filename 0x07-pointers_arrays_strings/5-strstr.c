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
	int i;
	int j;


	if (needle == NULL)
		return (haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
					break;
				j++;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return (0);
}
