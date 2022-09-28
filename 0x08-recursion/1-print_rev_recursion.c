#include "main.h"

/**
 * _print_rev_conversion - prints a string in reverse
 *
 * @s: given string
 *
 * Return: void*/
void _print_rev_recursion(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	len++;

	if (s[len] == s[1])
	{
		_putchar(s[len]);
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s - 1);
	}
}
