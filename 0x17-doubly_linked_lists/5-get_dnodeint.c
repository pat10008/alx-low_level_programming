#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to be retrieved, starting from 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		if (x == index)
			return (i);
		x++;
	}

	return (NULL);
}
