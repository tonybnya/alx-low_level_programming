#include "main.h"

/**
 * _puts - print a string to the stdout
 *
 * @s: the given string
 *
 * Return: void
 */

void _puts(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
