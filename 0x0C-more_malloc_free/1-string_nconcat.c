#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: first bytes of s2
 *
 * Return: NULL if fails, otherwise pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, lens1 = 0, lens2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lens1 = strlen(s1);
	lens2 = strlen(s2);
	if (n > lens2)
		n = lens2;
	ptr = malloc(lens1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < lens1 + n; i++)
	{
		if (*s1)
		{
			ptr[i] = *s1;
			s1++;
		}
		else
		{
			ptr[i] = *s2;
			s2++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
