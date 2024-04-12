#include "hash_tables.h"
/**
* hash_table_delete - function
* @ht: pointer
* Return: return
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *a;
	hash_node_t *b;
	unsigned long int c;

	if (!ht)
		return;
	for (c = 0; c < ht->size; c++)
		for (a = ht->array[c]; a; a = b)
		{
			b = a->b;
			free(a->key);
			free(a->value);
			free(a);
		}
	free(ht->array);
	free(ht);
}
