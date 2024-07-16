#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using Binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */


int binary_search(int *array, size_t size, int value)
{
	int  a, b, c;

	if (array == NULL)
		return (-1);

	b = size - 1;
	a = 0;

	while (a <= b)
	{
		print_array(array, a, b);
		c = (a + b) / 2;
		if (array[c] > value)
			b = c - 1;
		else if (array[c] < value)
			a = c + 1;
		else
			return (c);
	}
	return (-1);
}


/**
  * print_array - function
  * @array: struct
  * @left: struct
  * @right: struct
  */

void print_array(int *array, int left, int right)
{
	int x;

	printf("Searching in array: ");
	for (x = left; x < right; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[x]);
}
