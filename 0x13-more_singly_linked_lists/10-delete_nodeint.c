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

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list.
 * @head: pointer to head node
 * @index: index to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *next_node;
	unsigned int len, i = 0;

	len = listint_len(*head);
	if (*head  == NULL || index >= len)
		return (-1);
	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}
	while (i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	next_node = temp->next;
	temp->next = next_node->next;
	free(next_node);
	return (1);
}


















