#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to head node
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
