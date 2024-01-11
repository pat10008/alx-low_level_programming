#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - function that frees a list
* @head: Pointer to the head of the doubly linked list.
* Return:
*/

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}

}
