#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j ;

	i = 122;
	j = 97;

	while (i >= j)
	{
		putchar(i);
		i -= 1;
	}
	putchar('\n');

	return (0);
}
