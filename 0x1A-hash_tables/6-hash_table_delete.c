#include "hash_tables.h"

/**
 * hash_table_delete - function
 * @ht: pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *b;

	while (a < ht->size)
	{
		while (ht->array[a] != NULL)
		{
			b = ht->array[a]->next;
			free(ht->array[a]->key);
			free(ht->array[a]->value);
			free(ht->array[a]);
			ht->array[a] = b;
		}
		a++;
	}
	free(ht->array);
	free(ht);
}
