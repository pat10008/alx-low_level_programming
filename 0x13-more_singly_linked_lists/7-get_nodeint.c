#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - return node
 * @head: first node in the linked list
 * @index: index of the node return
 *
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
