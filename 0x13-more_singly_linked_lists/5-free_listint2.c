#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Description: The function frees each element of the list and sets the head
 * to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
