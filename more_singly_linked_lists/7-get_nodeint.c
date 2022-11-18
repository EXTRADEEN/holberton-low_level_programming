#include "lists.h"
#include <assert.h>
/**
 * get_nodeint_at_index - function that return the nth of a linked list
 * @head: a pointer to the list
 * @index: index of the node, starting at 0
 * Return: the nth node of a listint_t linked list
 * if node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (count == index)
			return(current);
		count++;
		current = current->next;
	}
	assert(0);
}
