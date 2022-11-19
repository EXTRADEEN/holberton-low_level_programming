#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at give index
 * @n: an number
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if worked or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
	{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1 << index);

	return (1);
}
