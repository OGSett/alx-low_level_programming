#include "lists.h"

/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list.
 * @head: pointers to the list.
 * @str: the string to be added.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *current;
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	current = malloc(sizeof(list_t));
	if (!current)
		return (NULL);
	current->str = strdup(str);
	if (!current->str)
	{
		free(current);
		return (NULL);
	}
	current->len = i;
	current->next = *head;
	*head = current;
	return (current);
}
