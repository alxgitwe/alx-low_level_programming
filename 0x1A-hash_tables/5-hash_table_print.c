#include "hash_tables.h"

/**
 * hash_table_print - function
 * @ht: pointer
 *
 * Return: return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a = 0;
	hash_node_t  *b;
	int c = 0;

	if (!ht)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		b = ht->array[a];
		while (b)
		{
			if (c)
				printf(", ");
			printf("'%s': '%s'", b->key, b->value);
			c = 1;
			b = b->next;
		}
	}
	printf("}\n");
}
