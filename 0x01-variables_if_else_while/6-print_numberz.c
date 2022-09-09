#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '1';

	while (c <= '9')
	{
		putchar(c);
		c += 1;
	}
	printf("\n");

	return (0);
}
