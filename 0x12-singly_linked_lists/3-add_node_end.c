#include "lists.h"

/**
 * _len - calculate lenght of a string
 * @str: str to be calculated
 * Return: lenght of str
 */

unsigned int _len(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * add_node_end - add a node at the end of a list
 * @head: poiinters to the list
 * @str: string to eb added
 * Return: ponter to the new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;
	unsigned int i;

	current = *head;
	i = _len(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (current && current->next)
		current = current->next;
	current->next = new;
	return (new);
}
