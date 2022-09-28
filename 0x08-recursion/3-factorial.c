#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: given number
 *
 * Return: factorial of the given number or -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if ((n == 0) || (n == 1))
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
