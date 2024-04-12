#include "hash_tables.h"

/**
 * hash_table_set - hash table
 * @ht: pointer
 * @key: pointer
 * @value: pointer
 *
 * Return: return
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *a;
	char *b;
	unsigned long int c, d;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	b = strdup(value);
	if (b == NULL)
		return (0);

	c = key_index((const unsigned char *)key, ht->size);
	for (d = c; ht->array[d]; d++)
	{
		if (strcmp(ht->array[d]->key, key) == 0)
		{
			free(ht->array[d]->value);
			ht->array[d]->value = b;
			return (1);
		}
	}

	a = malloc(sizeof(hash_node_t));
	if (a == NULL)
	{
		free(b);
		return (0);
	}
	a->key = strdup(key);
	if (a->key == NULL)
	{
		free(a);
		return (0);
	}
	a->value = b;
	a->next = ht->array[c];
	ht->array[c] = a;

	return (1);
}
