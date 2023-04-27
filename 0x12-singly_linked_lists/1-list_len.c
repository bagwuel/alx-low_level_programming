#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to head element
 *
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *temp = h;

	if (h == NULL)
		return (len);
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
