#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head node
 *
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast = head;
	const listint_t *slow = head;
	int i = 0;

	if (head == NULL)
		exit(98);
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		i++;
		if (fast && (fast->next)->next)
			fast = (fast->next)->next;
		else
			fast = NULL;
		slow = slow->next;
		if ((fast == slow) && fast != NULL)
		{
			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)fast, fast->n);
				i++;
				slow = slow->next;
				fast = fast->next;
			}
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			break;
		}
	}
	return (i);
}
