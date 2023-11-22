#include "lists.h"

/**
 * insert_nodeint_at_index -inserts a new node at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - index start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx, do
 * not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	while (i < (idx - 1))
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
		i++;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
