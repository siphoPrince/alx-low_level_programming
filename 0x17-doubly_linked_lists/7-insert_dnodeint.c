#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserting at index
 * @h: used for double pointer
 * @idx: index
 * @n: used to store values
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	unsigned int count = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (h == NULL)
	return (NULL);
	if (new_node == NULL)
	return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
		(*h)->prev = new_node;
	*h = new_node;
	return (new_node);
	}
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
	current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}

