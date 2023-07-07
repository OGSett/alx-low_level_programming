#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at
 * the beginning of a listint_t list.
 * @head: list;
 * @n: its element.
 * Return: the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = *head;
	*head = current;
	return (current);
}
