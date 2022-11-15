#include "lists.h"

/**
 * list_len -  function that prints the number of nodes
 * @h: list_t pointer
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	int count_len = 0;

	while (h)
	{
		h = h->next;
		count_len++;
	}
	return (count_len);

}
