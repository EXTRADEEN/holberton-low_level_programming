#include "lists.h"

/**
 * print_listint - is a function that prints elements of a list
 * @h: pointer to the structure
 * Return: the numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
