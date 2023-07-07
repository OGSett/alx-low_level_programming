#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list
 * @head: pointer to the list
 * @index: index of node
 * Return: the nth node of the list,
 * or NULL if it does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	i = 0;
	current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
