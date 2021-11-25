#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a double linked
 * list
 *
 * @head: the pointer to the head of dlistint_t
 * @n: the integer or node to be added at the beginning
 *
 * Return: an address for the new node
 *           otherwise NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
