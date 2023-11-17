#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a linked list.
 *
 * @head: Pointer to the head of the list.
 * @str: String to be added to the list.
 *
 * Description: This function appends a new node containing the provided
 * string to the end of the linked list. It returns the address of the
 * newly added element or NULL in case of failure.
 *
 * Return: Address of the newly added element or NULL in case of failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (head == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		perror("strdup");
		free(new_node);
		exit(EXIT_FAILURE);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{

		list_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = new_node;
	}
	return (*head);
}
