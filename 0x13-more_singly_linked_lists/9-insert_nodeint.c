#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position.
 * @head: the list
 * @idx: index where the the node should added.
 * @n: value of new node
 * Return: the new node or NULL otherwise.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current;
	listint_t *new;

	i = 0;

	if (head == NULL && idx != 0)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
