#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: a number
 *
 * Return: 1 and print + if n is greater than 0
 * 0 if n is zero
 * -1 and print - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
