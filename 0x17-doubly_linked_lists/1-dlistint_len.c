#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to head node
 *
 * Return: number of elements in linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_nodes = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (num_of_nodes);
	while (temp != NULL)
	{
		num_of_nodes += 1;
		temp = temp->next;
	}
	return (num_of_nodes);
}
