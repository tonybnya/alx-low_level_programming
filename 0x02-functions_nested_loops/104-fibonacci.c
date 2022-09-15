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
	long long int a = 1;
	long long int b = 2;
	long long int c = a + b;

	int counter = 2;

	printf("%lld, ", a);
	printf("%lld, ", b);

	while (counter < (limit - 1))
	{
		printf("%lld, ", c);
		a = b;
		b = c;
		c = a + b;

		counter += 1;
	}
	printf("%lld\n", c);
}
