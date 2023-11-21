#include "lists.h"

/**
 * add_nodeint - Inserts a new node at the beginning
 *               of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: The integer value for the new node.
 *
 * Description: This function adds a new node containing the specified integer
 * at the beginning of a listint_t list.
 * It returns the address of the new element
 * on success and NULL on failure. The implementation adheres to the betty
 * documentation and coding style.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!head)
	{
		return (NULL);
	}
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
	}

	return (new_node);
}
/**
 * reverse_and_print_list - reverses a listint_t linked list and prints it
 * @head: pointer to the head of the list
 *
 * Description: This function reverses the linked list in-place and then prints
 * each element in the reversed order.
 */
void reverse_and_print_list(listint_t *head)
{
	listint_t *prev = NULL;
	listint_t *current = head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
