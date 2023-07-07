#include "lists.h"

/**
 * free_list - funct that del and free a list
 * @head: list to be freed
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}

}
