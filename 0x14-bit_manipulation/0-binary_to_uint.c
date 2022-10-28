#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number of 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	int idx;

	if (b == NULL)
		return (0);

	dec = 0;
	idx = 0;
	while (b[idx] != '\0')
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		dec <<= 1;
		if (b[idx] == '1')
			dec += 1;

		idx++;
	}

	return (dec);
}
