#include "lists.h"
/**
 * pop_listint - Removes the head node from a
 *               listint_t linked list.
 * @head: A pointer to the address of the head
 *        pointer of the listint_t list.
 *
 * Description: Removes and frees the head node,
 *              and updates the head pointer to
 *              point to the next node.
 *
 * Return: If the list is empty - 0.
 *         Otherwise - The value of the removed
 *         node's integer.
 */
int pop_listint(listint_t **head)
{
	int d = 0;

	if (*head != NULL)
	{
		listint_t *next_node = (*head)->next;

		d = (*head)->n;
		free(*head);
		*head = next_node;
	}

	return (d);
}
