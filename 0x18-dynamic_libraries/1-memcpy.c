#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area src
 * to memory area dest
 *
 * @dest: a pointer to the destination memory area
 * @src: a pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: a pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *ptrd = dest;
	char *ptrs = src;

	i = 0;
	while (i < n)
	{
		ptrd[i] = ptrs[i];
		i++;
	}

	return (dest);
}
