#include "main.h"

/**
 * create_array - creates an array of char, and initializes it with char
 *
 * @size:
 * @c: character for initialization
 *
 * Return: a pointer to the array, or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
