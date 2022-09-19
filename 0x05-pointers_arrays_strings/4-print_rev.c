#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: the given string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, len;

	len = 0;
	while (s[len] != '\0')
	{
		++len;
	}

	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
