#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely
 *
 * @h: Double pointer to the head of the linked list
 *
 * Return: Number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	while (*h)
	{
		/* Check for loop and exit if true */
		if (*h <= (*h)->next)
		{
			/* Set the last node's next to NULL and exit */
			(*h)->next = NULL;
			free(*h);
			*h = NULL;
			count++;
			break;
		}

		/* Free the current node and update the temporary pointer */
		temp = (*h)->next;
		free(*h);
		*h = temp;
		count++;
	}

	return (count);
}
