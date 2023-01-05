#include "search_algos.h"

/**
 * binary_search - unction that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to serch in
 * @size: the numebr of elements in array
 * @value: the value to search
 * Return: the index where the value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (m = l; m < r; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);

		m = (l + r) / 2;

		if (value == array[m])
			return (m);
		if (value < array[m])
			r = m - 1;
		if (value > array[m])
			l = m + 1;
	}
	return (-1);
}
