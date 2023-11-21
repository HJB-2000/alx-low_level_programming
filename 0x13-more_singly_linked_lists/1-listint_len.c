#include "lists.h"
/**
 * listint_len - Computes the count of elements in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Description: This function returns the number of elements in a
 * listint_t list.It follows the betty documentation and coding style.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	for (; h; h = h->next)
		nodes++;

	return (nodes);
}
