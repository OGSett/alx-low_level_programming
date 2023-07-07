#include "lists.h"

/**
 * listint_len - function taht calculate the number of
 * elements in a list.
 * @h: the list to be calculated
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
