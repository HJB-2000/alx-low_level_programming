#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1, On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a, *b = *head;
	unsigned int node;

	if (b == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *y = *head;
		*head = (*head)->next;
		free(y);
		return (1);
	}

	while (node < (index - 1))
	{
		if (b->next == NULL)
			return (-1);

		b = b->next;
		node++;
	}

	a = b->next;
	b->next = a->next;
	free(a);
	return (1);
}
