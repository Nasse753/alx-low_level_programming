#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list
 * @h: Pointer to the head of the list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0; // Initialize the count of nodes to 0

	while (h != NULL)
	{
	printf("%d\n", h->n); // Print the value of the current node
	h = h->next; // Move to the next nod
	node_count++; // Increment the node count
	}

	return node_count; // Return the total number of nodes
}
