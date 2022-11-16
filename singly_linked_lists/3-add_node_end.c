#include "lists.h"

/**
 * add_node_end - function that adds a new node
 * @head: the new node
 * @str: the new data
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int i = 0;
	list_t *new;

	s = strdup(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	new->str = s;
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
