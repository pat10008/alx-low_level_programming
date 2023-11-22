#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a linked ls
 * @head: pointer to the first nod the ls
 *
 * Return: pointer to the first node in the new ls
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
