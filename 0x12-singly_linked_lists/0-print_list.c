#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list_t
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *temp = h;

	if (h == NULL)
		return (i);
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
