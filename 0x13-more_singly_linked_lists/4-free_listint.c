#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a functiont that frees a list
 * @head " the pointer to the beginging of the list
 *
 * return : void
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
