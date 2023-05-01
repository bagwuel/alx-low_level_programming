#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: pointer to head node
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = *head;
	listint_t *next_node;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	next_node = prev_node->next;
	*head = NULL;
	while (next_node != NULL)
	{
		prev_node->next = *head;
		*head = prev_node;
		prev_node = next_node;
		next_node = prev_node->next;
	}
	prev_node->next = *head;
	*head = prev_node;
	return (*head);
}
