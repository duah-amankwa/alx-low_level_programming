#include "lists.h"
#include <stdio.h>

/**
 * listint_len- function that returns the number of elements in a listint_t list
 * @h: A pointer to listint_t structure
 * return : number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
