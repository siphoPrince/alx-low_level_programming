#include "lists.h"

/**
 * sum_listint - Computes the sum of all the data (n) of a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data (n) of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	for (current = head; current != NULL; current = current->next)
	{
		sum += current->n;
	}

	return (sum);
}

