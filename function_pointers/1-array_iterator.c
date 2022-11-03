#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - executes function
 * @array: pointer to array
 * @size: structur size_t type
 * @action: pointer to function
 *
 * Return - void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array == 0 || size == 0 || action == 0)
		return;

	for (n = 0; n < size; n++)
	action(array[n]);
}
