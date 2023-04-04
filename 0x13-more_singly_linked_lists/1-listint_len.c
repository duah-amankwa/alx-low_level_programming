#include "lists.h"
#include <stdio.h>

/**
 * listint_len- returns the number of elemets
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
