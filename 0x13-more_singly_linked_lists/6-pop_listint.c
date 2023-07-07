#include "lists.h"

/**
 * pop_listint - deletes the head of a node
 * and return the head's data (i).
 * @head: the list
 * Return: the head's data stored in a variable
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int i;

	if (*head == NULL)
		return (0);
	current = *head;
	i = current->n;
	*head = (*head)->next;
	free(current);
	return (i);
}
