#include "main.h"

/**
 * *_memset - fills memory with a constant byte*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *ptr = s;

	while (i <= n)
	{
		*ptr = b;
		i++;
	}

	return (s);
}
