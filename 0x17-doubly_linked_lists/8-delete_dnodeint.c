#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delet node of index
 * @head: the head of the node
 * @index: the index of the node
 * Return: the deleted node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = *head;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	return (-1);

	current->prev->next = current->next;
	if (current->next != NULL)
	current->next->prev = current->prev;

	free(current);

	return (1);
}

