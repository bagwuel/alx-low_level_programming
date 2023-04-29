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
