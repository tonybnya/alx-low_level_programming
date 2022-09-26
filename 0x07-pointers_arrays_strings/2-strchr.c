#include "main.h"

/**
 * *_strchr - locates a character in a string
 *
 * @s: a string
 * @c: the character to locate
 *
 * Return: a pointer to the first occurrence of c or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return ('\0');
}
