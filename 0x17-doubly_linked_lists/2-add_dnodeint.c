#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at the begining or start
 * @head: the head of the node
 * @n: used to link to the other refs
 * Return: a node added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}

