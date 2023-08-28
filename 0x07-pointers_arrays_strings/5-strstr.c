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
        int i = 0;
	int j;

        if (needle[i] == NULL)
                return (haystack);

        for (i = 0; haystack[i] != '\0'; i++)
        {
                if (haystack[i] == needle[0])
                {
                        for (j = 0; needle[j] != '\0'; j++)
                        {
                                if (haystack[i + j] != needle[j])
                                        break;
                        }
                        if (needle[j] == '\0')
                                return (haystack + i);
                }
        }
        return (0);
}
}
