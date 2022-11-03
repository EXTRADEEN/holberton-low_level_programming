#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @size: number of elements in the array
 * @cmp: pointer to the function
 * @array: pointer to array
 * Return: -1 no element matches
 * if size <= 0 retun -1
 */
int int_index(int *array, int size, int (cmp)(int))
{
	int x;

	if (array == 0 || size == 0 || cmp == 0)
		return (-1);
	if (size <= 0)
		return (-1);
	for (x = 0; x <= size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
