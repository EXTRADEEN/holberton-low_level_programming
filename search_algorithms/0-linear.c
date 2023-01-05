#include "search_algos.h"

/**
 * linear_search - function that search for a value in an array of integers
 * @array: pointer to the firs element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: function must return the first index where value is located
 * if value is not present in array or if array is NULL,
 * your function must return -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
