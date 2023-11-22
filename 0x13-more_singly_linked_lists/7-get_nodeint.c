#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a given
 *                        index in a linked listint_t list.
 * @head: A pointer to the head node of the listint_t list.
 * @index: The index of the node to return - 0 indexed.
 *
 * Description: Locates the node at the Nth index from
 *              the head node.
 *
 * Return: If the node is not found - NULL.
 *         Otherwise - A pointer to the located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	return (get_nodeint_at_index(head->next, index - 1));
}

