#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the
 * node at index index of a dlistint_t linked list.
 * @head: pointer to head node pointer
 * @index: index to delete node from
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		node = temp->next;
		i++;
	}
	if (!(temp != NULL && i < index))
		return (-1);
	temp->next = node->next;
	(temp->next)->prev = temp;
	free(node);
	return (1);
}
