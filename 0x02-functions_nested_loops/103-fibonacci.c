#include <stdio.h>

int fib(int);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int limit;
	long int evens = 0;

	limit = 50;

	evens = fib(limit);
	printf("%ld\n", evens);

	return (0);
}

/**
 * fib - print the first n numbers of the fibonacci sequence
 *
 * @limit: integer as the count of the numbers in the sequence
 *
 * Return: void
 */
int fib(int limit)
{
	long int a = 1;
	long int b = 2;
	long int c = a + b;
	long int evens = 2;

	int counter = 2;


	while (counter < limit)
	{
		a = b;
		b = c;
		c = a + b;

		if ((c <= 4000000) && ((c % 2) == 0))
			evens += c;

		counter += 1;
	}

	return (evens);
}
