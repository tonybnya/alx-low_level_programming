#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of parameters
 * @...: variable number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list itr;
	unsigned int idx;

	va_start(itr, n);
	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(itr, int));
		if (idx != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(itr);
}
