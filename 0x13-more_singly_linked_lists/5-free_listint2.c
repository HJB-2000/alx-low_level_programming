#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A double pointer to the address of 
 *        the head of the listint_t list.
 *
 * Description: Sets the head to NULL to free
 *              the listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	for (; *head != NULL; ) 
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}

