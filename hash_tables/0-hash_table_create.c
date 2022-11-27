#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * #size: size of the array
 * Return: a pointer to the newly created hash table
 * if something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);

	new_table->size = size;

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
