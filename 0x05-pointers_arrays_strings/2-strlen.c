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

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}

	return (i);
}
