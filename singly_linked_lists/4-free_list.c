#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - function that frees a list_t list.
 * @head: A pointer to the head of the list_t list.
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
