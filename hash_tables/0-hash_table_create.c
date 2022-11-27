#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 * if something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **new_array;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t)); /*create hash table*/
	if (new_table == NULL)
		return (NULL);

	new_array = malloc(sizeof(hash_node_t *) * size); /*create an array*/
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_array[i] = NULL;

	new_table->array = new_array;
	new_table->size = size;

	return (new_table);
}
