#include "lists.h"

/**
 * sum_listint - a function that returns the
 * sum of all the data (n).
 * @head: pointer to the list.
 * Return: the sum of all data of the list
 */

int sum_listint(listint_t *head)
{
	int i;
	listint_t *current;

	i = 0;
	current = head;
	while (current != NULL)
	{
		i += current->n;
		current = current->next;
	}
	return (i);
}
