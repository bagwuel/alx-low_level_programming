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
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (i < index)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
