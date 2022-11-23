#include "lists.h"

/**
 * add_dnodeint_end - is a function that adds a new node at the end of a list
 * @n: the new data
 * @head: the new node
 * Return: the address of the new element,
 * or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_last, *temp;

	new_last = malloc(sizeof(dlistint_t));
	if (new_last == NULL)
		return (NULL);

	new_last->n = n;
	new_last->next = NULL;

	temp = *head;

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_last;
	}
	else
	{
		*head = new_last;
	}
	new_last->prev = temp;

	return (new_last);
}
