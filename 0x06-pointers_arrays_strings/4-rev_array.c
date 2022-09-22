#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: the given array
 * @n: length of th array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
