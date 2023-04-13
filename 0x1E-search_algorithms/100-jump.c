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
	int step = sqrt(size);
        int prev = 0;
	char str1[] = "Value checked array";
	char str2[] = "Value found between indexes";

	if (array == NULL)
		return (-1);

	printf("%s[0] = [%d]\n", str1, array[0]);

	while (array[(int)(fmin(step, size) - 1)] < value)
	{
                prev = step;
                step += sqrt(size);

                if (prev >= (int)size)
                        return (-1);

                printf("%s[%d] = [%d]\n", str1, prev, array[prev]);
	}

        while (array[prev] < value)
        {
                prev++;
                if (prev == fmin(step, size))
                        return (-1);
                printf("%s[%d] = [%d]\n", str1, prev, array[prev]);
        }

        if (array[prev] == value)
        {
                printf("%s [%d] and [%d]\n", str2, prev, prev);
                return (prev);
        }

	return (-1);
}
