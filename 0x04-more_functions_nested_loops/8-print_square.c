#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int i, j;
	char nl, c;

	nl = '\n';
	c = '#';

	if (size <= 0)
	{
		_putchar(nl);
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(c);
		}
		_putchar(nl);
	}
}
