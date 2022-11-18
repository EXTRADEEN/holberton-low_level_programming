#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at given position
 * @head: pointer to pointer
 * @idx: given position
 * @n: an integer
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
