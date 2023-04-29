#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to head element
 *
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *temp = h;

	if (h == NULL)
		return (len);
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}

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

	if (*head == NULL || listint_len(*head) == 1)
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
