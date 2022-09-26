#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: a string
 * @accept:
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int nbytes;
	int i;

	nbytes = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				nbytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (nbytes);
			}
		}
		s++;
	}

	return (nbytes);
}
