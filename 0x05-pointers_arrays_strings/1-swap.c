#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: pointer to the 1st integer
 * @b: pointer to the 2nd integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
