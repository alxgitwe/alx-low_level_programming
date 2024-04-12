#include "hash_tables.h"

/**
 * hash_table_create - hash table
 * @size: size
 *
 * Return: return
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *y;
	unsigned long int j;

	y = malloc(sizeof(hash_table_t));

	if (y == NULL)
		return (NULL);

	y->size = size;

	y->array = malloc(sizeof(hash_node_t *) * size);

	if (y->array == NULL)
	{
		free(y);
		return (NULL);
	}
	
	for (j = 0; j < size; j++)
		y->array[j] = NULL;

	return (y);
}
