#include "3-calc.h"

/**
 * op_add - sum of two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - quotient of two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulo (remainder) of two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: modulo (remainder)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
