#include "lists.h"

/**
 * delete_nodeint_at_index -  function that deletes the
 * node at index index of a listint_t linked list.
 * @head: the list.
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *last = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		last = current;
		current = current->next;
	}
	if (last == NULL)
	{
		*head = current->next;
		free(current);
	}
	else if (current != NULL)
	{
		last->next = current->next;
		free(current);
	}
	else
	{
		return (-1);
	}
	return (1);
}
