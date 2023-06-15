#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to head node pointer
 * @idx: index where node is to be inserted
 * @n: data to be inserted
 *
 * Return: address of new node on success NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	temp = *h;
	if (idx == 0)
	{
		*h = new_node;
	}
	else
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (!(temp != NULL && i < idx))
		return (NULL);
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next = new_node;
	(temp->next)->prev = new_node;
	return (new_node);
}
