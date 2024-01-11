#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to the doubly linked list.
 * @index: Index to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *temp;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(current);
	return (1);
	}

	while (current != NULL && i < index)
	{
	current = current->next;
	i++;
	}

	if (current == NULL)
	return (-1);


	temp = current->prev;
	temp->next = current->next;

	if (current->next != NULL)
	current->next->prev = temp;
	free(current);

	return (1);
}
