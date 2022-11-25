#include "lists.h"

/**
 *delete_dnodeint_at_index - function that deletes the node at index
 *index of a listint_t linked list
 *@head: pointer to pointer
 *@index: the index of the node that should be deleted
 *
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (tmp == NULL)
		return (-1);

	while (i != index)
	{
		if (tmp->next == NULL)
			return (-1);
		i++;
		tmp = tmp->next;
	}

	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
