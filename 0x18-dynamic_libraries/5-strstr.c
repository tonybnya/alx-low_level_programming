#include "main.h"

/**
 * *_strstr - finds the first occurrence of the substring
 * needle in the string haystack
 *
 * @haystack: a string to be searched.
 * @needle: a substring
 *
 * Return: a pointer to the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}

	return ('\0');
}
