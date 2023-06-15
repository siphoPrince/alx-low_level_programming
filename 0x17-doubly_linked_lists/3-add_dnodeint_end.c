#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - adding the node at the end
 * @head: the head of the node
 * @n: the ref or link of the node
 * Return: adding a new node at the end
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *current = *head;
		while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	new_node->prev = current;
	}

	return (new_node);
}
