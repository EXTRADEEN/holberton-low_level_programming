#include "lists.h"

/**
 * listint_len - is a function that prints the number of elements of a list
 * @h: pointer to the structure
 * Return: the numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
