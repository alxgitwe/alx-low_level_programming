#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using Linear search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int x;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (value == array[x])
			return (x);
	}
	return (-1);
}
