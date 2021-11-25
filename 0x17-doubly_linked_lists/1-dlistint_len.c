#include "lists.h"

/**
 * dlistint_len - Prints the number of elements in a double linked
 * list
 *
 * @h: the double linked list
 *
 * Return: the number of nodes iin h if successful
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
