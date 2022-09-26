#include "main.h"

/**
 * *_strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 *
 * @s: a string
 * @accept: set of bytes to be searched for
 *
 * Return: pointer to the byte in s that matches
 * one of the bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}
