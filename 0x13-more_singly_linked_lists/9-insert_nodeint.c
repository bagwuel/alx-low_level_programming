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
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head pointer
 * @n: number to be add to the linked list
 *
 * Return: address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to head node
 * @idx: idx of list where data is to added
 * @n: data to be added
 *
 * Return: address of new node, NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	unsigned int len;
	listint_t *temp = *head;
	listint_t *new_node;

	len = listint_len(*head);
	if (head == NULL || idx > len)
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));
	if (idx == len)
		return (add_nodeint_end(head, n));
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
