#include "hash_tables.h"


/**
 * hash_table_print - prints the contents of a hash table.
 *
 * @ht: the hash table
 *
 * Return: returns nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	unsigned char flag = 0;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			while (ht->array[index] != NULL)
			{
				printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
				ht->array[index] = ht->array[index]->next;
				if (ht->array[index] != NULL)
				{
					printf(", ");
				}
			}
			flag = 1;
		}
	}
	printf("}\n");
}
