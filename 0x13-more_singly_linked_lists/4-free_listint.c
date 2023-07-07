#include "lists.h"

/**
 * free_listint - a func that free a list of nodes
 * @head: the list to e freed
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
