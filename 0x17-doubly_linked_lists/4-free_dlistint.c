#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
			free(temp->prev);
		}
		free(temp);
	}
}
