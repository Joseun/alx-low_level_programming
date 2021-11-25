#include "lists.h"

/**
 * print_dlistint - Prints all the elements in a double linked
 * list
 *
 * @h: the double linked list
 *
 * Return: the number of nodes iin h if successful
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
