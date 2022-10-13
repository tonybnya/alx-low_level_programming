#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array as a parameter
 * @size: length of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]) != 0)
		{
			return (idx);
		}
	}

	return (-1);
}
