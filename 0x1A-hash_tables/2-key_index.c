#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value.
 * @key: The key.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of key/value pair should be stored in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
