#include "lists.h"

/**
 * sum_listint - function that returns the sum of all data (n),
 * of a listint_t linked list
 * @head: pointer to the linked list
 * Return: sum of data,
 * if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
