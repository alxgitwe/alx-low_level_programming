#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	int  x, y;
	double i;

	if (array == NULL)
		return (-1);

	i = sqrt((double)size);
	y = i;
	x = 0;

	while (array[x] < value)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x + y] >= value || x + y >= (int)size)
		{
			printf("Value found between indexes [%d] and [%d]\n", x, x + y);
			break;
		}
		x = x + y;
	}
	while (x < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
		x++;
	}
	return (-1);
}
