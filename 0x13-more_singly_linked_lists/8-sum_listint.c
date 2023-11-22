#include "lists.h"

/**
 * sum_listint - Sums the integer data (n) of
 *               all nodes in a linked listint_t list.
 * @head: A pointer to the head node of the
 *        listint_t list to sum.
 *
 * Description: Iterates through the list, summing the
 *              integer data (n) in each node.
 *
 * Return: If list is empty - 0.
 *         Otherwise - The sum of all node data (n).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}

	return (sum);
}
