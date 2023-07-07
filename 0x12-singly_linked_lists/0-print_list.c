#include "lists.h"

/**
 * print_list - a function that prinnt all the elepent of the list_t list.
 *
 * @h: the list to be printed.
 * Return: the number of nodes encountred.
 */

size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		i += 1;
		h = h->next;
	}
	return (i);
}
