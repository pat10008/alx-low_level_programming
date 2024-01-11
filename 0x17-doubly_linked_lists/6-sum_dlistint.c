#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_dlistint - that returns the sum of all the data (n) of a list
* @head: Pointer to the head of the doubly linked list.
* Return: The sum of all the data, or 0 if the list is empty.
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *i;
	int sum = 0;

	for (i = head; i != NULL; i = i->next)
	{
		sum = sum + i->n;
	}
	return (sum);
}
