#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: Index where the new node should be added.
 * @n: Value
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *current = *h;
	unsigned int i = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
	newNode->prev = NULL;
	newNode->next = *h;
	if (*h != NULL)
		(*h)->prev = newNode;
	*h = newNode;
	return (newNode);
	}

	while (current != NULL && i < idx - 1)
	{
	current = current->next;
	i++;
	}

	if (current == NULL)
	{
	free(newNode);
	return (NULL);
	}

	newNode->prev = current;
	newNode->next = current->next;

	if (current->next != NULL)
	current->next->prev = newNode;

	current->next = newNode;

	return (newNode);
}
