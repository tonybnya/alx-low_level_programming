#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: pointer to the character of the string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	if (s == "")
	{
		return (0);
	}

	i = 0;
	while (s[i] != '\n')
	{
		i++;
	}

	return (i);
}
