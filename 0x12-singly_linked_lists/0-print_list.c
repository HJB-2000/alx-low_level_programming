#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 *
 * @h: Pointer to the head of the list.
 *
 * Description: This function iterates through a linked list starting from
 * the given head pointer and prints the value of each node. It returns
 * the total number of nodes in the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	const list_t *current_node;

	size_t node_count = 0;

	for (current_node = h; current_node != NULL;
			current_node = current_node->next)
	{
		if (current_node->str != NULL)
			printf("[%d] %s\n", current_node->len, current_node->str);
		else
			printf("[0] (nil)\n");

		node_count += 1;
	}

	return (node_count);
}
