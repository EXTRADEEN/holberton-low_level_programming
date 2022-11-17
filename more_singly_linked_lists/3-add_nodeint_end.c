#include "lists.h"

/**
 * add_nodeint_end - is a function that adds a new node at the end of a list
 * @n: the new data
 * @head: the new node
 * Return: the address of the new element,
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_last, *temp;

	new_last = malloc(sizeof(listint_t));
	if (new_last == NULL)
		return (NULL);

	new_last->n = n;
	new_last->next = NULL;

	if (*head == NULL)
		*head = new_last;

	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_last;
	}
	return (new_last);
}
