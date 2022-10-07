#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer as parameter
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ch = malloc(b);

	if (ch == NULL)
	{
		exit(98);
	}

	return (ch);
}
