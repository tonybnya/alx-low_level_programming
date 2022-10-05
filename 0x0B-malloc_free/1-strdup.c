#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: the given string
 *
 * Return: a pointer to the new string
 */
char *_strdup(char *str)
{
	char *output;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	output = (char *)malloc(sizeof(char) * (i + 1));

	if (output == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		output[j] = str[j];
	}

	return (output);
}
