#include "main.h"

/**
 * _puts - print a string to the stdout
 *
 * @str: the given string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
