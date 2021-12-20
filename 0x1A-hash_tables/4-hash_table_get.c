#include "hash_tables.h"

/**
 * hash_table_get - creates a hash table.
 *
 * @ht: hash table to look into
 * @key: key to the look for
 *
 * Return: NULL if key cannot be found, or value associated with key.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *element;

	index = key_index((const unsigned char *)key, ht->size);
	element = ht->array[index];

	if (element != NULL)
	{
		if (strcmp(element->key, key) == 0)
		{
			return (element->value);
		}
	}
	return (NULL);
}
