#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: the given string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char lst;

	len = 0;
	while (s[len] != '\0')
	{
		++len;
	}

	for (i = len - 1; i >= len / 2; i--)
	{
		lst = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = lst;
	}
}
