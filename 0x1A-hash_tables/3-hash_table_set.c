#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hash table to store the key/value pair
 * @key: the key to be used in the pair
 * @value: the data attached to the key.
 *
 * Return: 1 if succeeded and 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = (hash_node_t *) malloc(sizeof(hash_node_t));
	char *value_duplicate;
	unsigned long int index;

	if (key == NULL || ht == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}

	value_duplicate =  strdup(value);
	if (value_duplicate == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	for (; ht->array[index]; index++)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = value_duplicate;
			return (1);
		}
	}

	if (new == NULL)
	{
		free(value_duplicate);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_duplicate;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
