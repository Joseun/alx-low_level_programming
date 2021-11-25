#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a double linked
 * list
 *
 * @head: the pointer to the head of dlistint_t
 * @n: the integer or node to be added at the end
 *
 * Return: an address for the new node
 *           otherwise NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *end = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
		new->prev = end;
	}
	return (new);
}
