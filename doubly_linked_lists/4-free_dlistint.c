#include "lists.h"

/**
 * free_dlistint - function that frees a listint_t list.
 * dlistint_t list.
 * @head: A pointer to the head of the list_t list.
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
