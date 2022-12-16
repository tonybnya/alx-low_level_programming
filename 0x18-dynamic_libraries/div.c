#include "main.h"

/**
 * div - divides two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the quotient or -1 for Zero Division Error
 */
int div(int a, int b)
{
        if (b == 0)
                return (-1);

        return ((int)(a / b));
}
