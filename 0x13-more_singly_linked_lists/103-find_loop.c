#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head, *hare = head;

	/* Find the loop using the tortoise and hare algorithm */
	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
			break;
	}

	/* If there is no loop, return NULL */
	if (!tortoise || !hare || !hare->next)
		return NULL;

	/* Find the start of the loop */
	tortoise = head;

	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}

	return tortoise;
}
