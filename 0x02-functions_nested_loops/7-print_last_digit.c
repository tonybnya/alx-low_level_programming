#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: an integer
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	if (n < 0)
		lastdigit = (-1) * lastdigit;


	_putchar(lastdigit + '0');

	return (lastdigit);
}
