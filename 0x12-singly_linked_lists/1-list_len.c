#include "lists.h"

/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list.
 * @h: the list to be calculated
 * Return: its lenght.
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
