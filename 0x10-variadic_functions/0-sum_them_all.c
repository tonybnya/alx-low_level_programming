#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of parameters
 * @...: variable number of arguments
 *
 * Return: 0 if n is 0, sum otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list itr;
	unsigned int idx, sum;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(itr, n);
	for (idx = 0; idx < n; idx++)
	{
		sum += va_arg(itr, int);
	}
	va_end(itr);

	return (sum);
}
