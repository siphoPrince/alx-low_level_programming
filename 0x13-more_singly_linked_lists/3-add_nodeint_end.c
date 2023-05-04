#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head node of the list.
 * @n: Integer value to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	/* create a new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	/* if the list is empty, set the head to the new node */
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	/* find the last node */
	last_node = *head;
	while (last_node->next != NULL)
	last_node = last_node->next;

	/* append the new node to the end */
	last_node->next = new_node;

	return (new_node);
}

