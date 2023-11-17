#include "lists.h"
/**
 * free_list - Frees the memory allocated for a linked list.
 *
 * @head: A pointer to the head of the list.
 *
 * Description: This function takes a pointer to the head of a linked list
 * and frees the memory allocated for each node in the list.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	for (; head; head = tmp)
	{
		tmp = head->next;
		free(head->str);
		free(head);
	}
}
