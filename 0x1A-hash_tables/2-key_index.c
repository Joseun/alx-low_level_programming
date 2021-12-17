#include "hash_tables.h"


/**
 * key_index - gets the index of a key.
 *
 * @key: the key to be located
 * @size: size of the hash table.
 *
 * Return: returns index of key/value pair should be stored
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	if (index <= size)
	{
		return (index);
	}
	else
	{
		index %= size;
		return (index);
	}
	return (index);
}
