#include "main.h"

/**
 * reverse_array - a function that reverse the content of an array of int
 * @a: an input array
 * @n: elements of content
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n--)
		{
			tmp = a[i];
			a[i++] = a[n];
			a[n] = tmp;
		}
}
