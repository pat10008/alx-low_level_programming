#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - calculates the sum of data
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int j = 0;
	listint_t *temp = head;

	while (temp)
	{
		j += temp->n;
		temp = temp->next;
	}

	return (j);
}
