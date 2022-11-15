#include "lists.h"

/**
 * print_list -  function that prints all the elements
 * @h: list pointer
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count_nodes++;
	}
	return (count_nodes);

}
