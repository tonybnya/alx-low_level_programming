#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, i, j;

	a = 48;
	b = 57;

	i = 97;
	j = 102;

	while (a <= b)
	{
		putchar(a);
		a += 1;
	}

	while (i <= j)
	{
		putchar(i);
		i += 1;
	}
	putchar('\n');

	return (0);
}
