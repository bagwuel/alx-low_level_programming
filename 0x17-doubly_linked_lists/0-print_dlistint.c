#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to head node
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_of_nodes = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (num_of_nodes);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		num_of_nodes += 1;
		temp = temp->next;
	}
	return (num_of_nodes);
}
