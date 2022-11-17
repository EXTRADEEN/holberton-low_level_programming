#include "lists.h"

/**
 * pop_listint -function that deletes the head node of a listint_t linked list
 * @head: pointer to listint_t
 * Return: head node's data
 * or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	tmp = *head;
	data = (*head)->n;
	*head = tmp->next;

	free(tmp);

	return (data);
}
