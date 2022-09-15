#include <stdio.h>

int print_sum(int);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int range, sum;

	range = 1024;
	sum = print_sum(range);

	printf("%d\n", sum);

	return (0);
}

/**
 * print_sum - sum the multiples of 3 or 5 below a range number
 *
 * @range: integer parameter as limit (excluded)
 *
 * Return: sum of all the multiples
 */
int print_sum(int range)
{
	int i, sum;

	sum = 0;
	i = 0;

	while (i < range)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
		i += 1;
	}

	return (sum);
}
