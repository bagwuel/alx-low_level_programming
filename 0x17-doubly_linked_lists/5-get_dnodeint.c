#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head node
 * @index: index of node to be gotten
 *
 * Return: node at index index, NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	if (index == 0)
		return (head);
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
