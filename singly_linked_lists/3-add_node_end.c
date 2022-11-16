#include "lists.h"

/**
 * add_node_end - function that adds a new node
 * @head: the new node
 * @str: the new data
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *cp_str;
	int len;
	list_t *new, *end;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	cp_str = strdup(str);
	if (cp_str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = cp_str;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}
