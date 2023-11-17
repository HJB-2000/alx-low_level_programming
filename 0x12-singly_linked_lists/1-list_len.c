#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of the linked list_t list.
 *
 * Return: The number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t e = 0;

	for (; h; h = h->next)
	{
		e++;
	}

	return (e);
}
