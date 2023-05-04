#include "lists.h"
#include <stddef.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head of list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
