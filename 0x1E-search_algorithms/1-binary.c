#include "search_algos.h"

/**
 * binary_search - Binary Search Algorithm on an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the index where value is located
 * -1 if value is not present in the array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, mid = 0;
	size_t right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");

		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}
