#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers using Interpolation search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * @low: Pointer to the low index
 * @high: Pointer to the high index
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
 
int interpolation_search(int *array, size_t size, int value)
{
	size_t a, b, c;

	if (array == NULL)
		return (-1);

	for (b = 0, c = size - 1; c >= b;)
	{
		a = b + (((double)(c - b) / (array[c] - array[b])) * (value - array[b]));
		if (a < size)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", a);
			break;
		}

		if (array[a] == value)
			return (a);
		if (array[a] > value)
			c = a - 1;
		else
			b = a + 1;
	}

	return (-1);
}
