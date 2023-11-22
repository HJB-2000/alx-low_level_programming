#include "lists.h"

/**
 * reverse_listint - Reverses the order of nodes in a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Description:
 * This function takes the head of a linked list and reverses the order of
 * its nodes. It returns a pointer to the first node of the reversed list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head) 
{
	listint_t *ahead, *behind, *current;

	if (head == NULL || *head == NULL)
		return (NULL);


	behind = NULL;
	current = *head;

	for (; current->next != NULL; *head = current, current = ahead) 
	{
		ahead = current->next;
		current->next = behind;
		behind = current;
	}

	current->next = behind;

	return (*head);
}

