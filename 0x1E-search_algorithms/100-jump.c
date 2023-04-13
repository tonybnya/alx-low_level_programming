#include "search_algos.h"

/**
 * jump_search - Jump Search Algorithm on a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located
 * -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int i = 0, m = 0, idx = 0, step = 0;

	if (array == NULL)
		return (-1);

	i = 0;
	step = sqrt(size);
	m = step;
	char str1[] = "Value checked array";
	char str2[] = "Value found between indexes";

	printf("%s[%d] = [%d]\n", str1, i, array[i]);
	while (array[m] <= value && m < size)
	{
		i = m;
		m += step;

		printf("%s[%d] = [%d]\n", str1, i, array[i]);
		/* if (m > size - 1) */
		/*         return (-1); */

		/* printf("%d\n", i); */
		/* printf("%d\n", m); */
	}

	printf("%s [%d] and [%d]\n", str2, i, m);

	for (idx = i; idx < m; idx++)
	{
		if (idx < size)
		{
			printf("%s[%d] = [%d]\n", str1, idx, array[idx]);

			if (array[idx] == value)
				return (idx);
		}
	}

	return (-1);
}
