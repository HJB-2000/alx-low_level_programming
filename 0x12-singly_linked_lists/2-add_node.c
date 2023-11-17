#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a linked list.
 *
 * @head: Pointer to the head of the list.
 * @str: String to be added.
 *
 * Description: This function creates a new node with the provided string
 * and adds it at the beginning of the linked list. It returns the address
 * of the new element or NULL if the operation fails.
 *
 * Return: Address of the new element or NULL if the operation fails.
 */

list_t *add_node(list_t **head, const char *str)
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
