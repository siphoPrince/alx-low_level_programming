#include "lists.h"
/**
 * sum_dlistint - sum of all data
 * @head: the link of the nodes
 * Return: the sum of dta
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
