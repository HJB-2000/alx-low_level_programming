#include "lists.h"

/**
 * print_listint - Displays all elements in a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Description: This function prints all the elements of a listint_t list.
 * It respects the betty documentation and coding style.
 *
 * Return: The number of nodes in the listint_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		nodes++;
	}

	return (nodes);
}
