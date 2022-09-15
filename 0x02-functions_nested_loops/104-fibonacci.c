#include <stdio.h>

void fib(int);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int limit;

	limit = 98;

	fib(limit);

	return (0);
}

/**
 * fib - print the first n numbers of the fibonacci sequence
 *
 * @limit: integer as the count of the numbers in the sequence
 *
 * Return: void
 */
void fib(int limit)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c = a + b;

	int counter = 2;

	printf("%lu, ", a);
	printf("%lu, ", b);

	while (counter < (limit - 1))
	{
		printf("%lu, ", c);
		a = b;
		b = c;
		c = a + b;

		counter += 1;
	}
	printf("%lu\n", c);
}
