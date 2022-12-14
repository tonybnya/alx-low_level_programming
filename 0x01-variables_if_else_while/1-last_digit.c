#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define START "Last digit of"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastdigit = n % 10;

	if (lastdigit > 5)
		printf("%s %d is %d and is greater than 5\n", START, n, lastdigit);

	if (lastdigit == 0)
		printf("%s %d is %d and is 0\n", START, n, lastdigit);

	if (lastdigit < 6 && lastdigit != 0)
		printf("%s %d is %d and is less than 6 and not 0\n", START, n, lastdigit);

	return (0);
}
