#include "lists.h"

/**
 * free_listint2 - a function that free a listint_t
 * list and set head to NULL.
 * @head: the list to be freed.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
