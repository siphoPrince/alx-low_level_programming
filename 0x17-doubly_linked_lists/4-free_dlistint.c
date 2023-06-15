#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - main function to free memory of a list
 * @head: used to link the head of the node
 * Return: the freed memory
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
