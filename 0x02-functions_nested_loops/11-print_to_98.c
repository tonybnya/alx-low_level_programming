#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers from n to 98, followed by a new line
 *
 * @n: integer as argument
 *
 * Return: void
 */
void print_to_98(int n)
{
	int limit = 98;

	if (n < limit)
	{
		while (n <= limit)
		{
			printf("%d", n);

			if (n != 98)
				printf(", ");

			n += 1;
		}
	}
	else if (n > 98)
	{
		while (n >= limit)
		{
			printf("%d", n);

			if (n != 98)
				printf(", ");

			n -= 1;
		}
	}
	else
		printf("%d", n);

	printf("\n");
}
