#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *tortoise = head, *hare = head;

	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
		hare = hare->next->next;
		count++;

		if (tortoise == hare)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			printf("-> [%p] %d\n", (void *)hare->next, hare->next->n);
			printf("-> [%p] %d\n", (void *)hare->next->next, hare->next->next->n);
			printf("-> [%p] %d\n", (void *)hare->next->next->next, hare->next->next->next->n);
			printf("-> [%p] %d\n", (void *)hare->next->next->next->next, hare->next->next->next->next->n);
			printf("-> [%p] %d\n", (void *)hare->next->next->next->next->next, hare->next->next->next->next->next->n);
			count++;
			break;
		}
	}

	return count;
}
