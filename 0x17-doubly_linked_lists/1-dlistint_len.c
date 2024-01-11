#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a dlistint_t linked list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
	current = current->next;
	count++;
	}

	return (count);
}
