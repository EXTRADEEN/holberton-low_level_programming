#include "main.h"

/**
 * swap_int - s function that swaps the values of two integers
 * @a: an input integer pointer
 * @b: an input integer pointer
 * Return: result of swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
