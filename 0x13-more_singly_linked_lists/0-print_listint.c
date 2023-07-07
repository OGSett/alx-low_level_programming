#include "lists.h"

/**
 * print_listint - function to printd a linked list elements
 * @h: the list to be printed
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
