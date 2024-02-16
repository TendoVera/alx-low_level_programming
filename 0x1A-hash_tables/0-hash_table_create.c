#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - A function that creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	htable = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (htable == NULL) {
        return NULL;
	}

	htable->size = size;
	htable->array = malloc(sizeof(hash_node_t *) * size);
	
	if (htable->array == NULL){
		return (NULL);
	}
	for (i = 0; i < size; i++)
		htable->array[i] = NULL;

	return (htable);
}
