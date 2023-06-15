#include <stddef.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - main function that returns ntn
 * @head: used to link the head
 * @index: used for locating the index
 * Return: null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
