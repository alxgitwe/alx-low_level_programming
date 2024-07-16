#include "search_algos.h"

/**
 * linear_skip - function
 * @list: struct
 * @value: struct
 *
 * Return: retunr
 *
 * Description: Description
 */
 
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *a, *b;

	if (list == NULL)
		return (NULL);

	for (a = b = list; b->next != NULL && b->n < value;)
	{
		a = b;
		if (b->express != NULL)
		{
			b = b->express;
			printf("Value checked at index [%ld] = [%d]\n",
					b->index, b->n);
		}
		else
		{
			while (b->next != NULL)
				b = b->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			a->index, b->index);

	for (; a->index < b->index && a->n < value; a = a->next)
		printf("Value checked at index [%ld] = [%d]\n", a->index, a->n);
	printf("Value checked at index [%ld] = [%d]\n", a->index, a->n);

	return (a->n == value ? a : NULL);
}
