#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * @s: pointer to the memory area to be filled
 * @b: character used to fill the memory
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *ptr = s;

	while (i < n)
	{
		ptr[i] = b;
		i++;
	}

	return (ptr);
}
