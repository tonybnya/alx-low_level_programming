#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= (size - 1); i++)
		{
			for (space = 0; space < (size - 1) - i ; space++)
			{
				_putchar(' ');
			}

			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}
