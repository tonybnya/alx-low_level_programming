#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int i, times;

	i = 0;
	times = 10;

	while (i < times)
	{
		int c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c += 1;
		}
		_putchar('\n');

		i += 1;
	}
}
