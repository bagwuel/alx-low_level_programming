#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head node
 *
 * Return: head node’s data (n), 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
		return (data);
	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
