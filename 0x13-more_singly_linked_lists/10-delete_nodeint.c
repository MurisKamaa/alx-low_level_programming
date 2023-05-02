#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: double pointer to the head of the listint_t list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (*head == NULL) /* empty list */
		return (-1);

	if (index == 0) /* delete head */
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}

	prev = NULL;
	current = *head;
	for (i = 0; current && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL) /* index out of range */
		return (-1);

	prev->next = current->next; /* unlink node */
	free(current); /* free memory */

	return (1);
}
