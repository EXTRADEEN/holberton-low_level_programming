#include "lists.h"
#include <assert.h>
/**
 * get_dnodeint_at_index - function that return the nth of a linked list
 * @head: a pointer to the list
 * @index: index of the node, starting at 0
 * Return: the nth node of a listint_t linked list
 * if node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
