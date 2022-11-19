#include "lists.h"

/**
 *delete_nodeint_at_index - function that deletes the node at index
 *index of a listint_t linked list
 *@head: pointer to pointer
 *@index: the index of the node that should be deleted
 *
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del_node;
	unsigned int i = 0;

	del_node = *head;

	if (del_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(del_node);
		return (1);
	}
	while (i < index - 1)
	{
		if (del_node->next == NULL)
			return (-1);

		del_node = del_node->next;
		i++;
	}
	temp = del_node->next;
	del_node->next = temp->next;
	free(temp);

	return (1);
}
