#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: paramater to specify number of times _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i += 1;
		}
		_putchar('\n');
	}
}
