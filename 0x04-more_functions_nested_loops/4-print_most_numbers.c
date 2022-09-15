#include "main.h"

/**
 * print_numbers -  prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
			_putchar((i % 10) + '0');

		i += 1;
	}
	_putchar('\n');
}
