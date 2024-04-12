#include "hash_tables.h"
/**
 * hash_table_get - function
 * @ht: pointer
 * @key: pointer
 *
 * Return: return
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int a;
	hash_node_t  *b;

	if (!ht || !key || !*key)
		return (NULL);

	a = key_index((const unsigned char *)key, ht->size);
	b = ht->array[a];

	while (b)
	{
		if (!strcmp(key, b->key))
			return (b->value);
		b = b->next;
	}
	return (NULL);
}
