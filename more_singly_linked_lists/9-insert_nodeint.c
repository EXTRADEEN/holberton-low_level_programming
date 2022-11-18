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
	listint_t *new;
	listint_t *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (*head == NULL)
		return (NULL);

	tmp = *head;

	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			if (new == NULL)
			{
				return (NULL);
			}
			else
			{
				new->n = n;
				new->next = tmp->next;
				tmp->next = new;

				return (new);
			}
		}
		if (tmp->next != NULL)
			tmp = tmp->next;
		i++;
	}
	return (NULL);
}
