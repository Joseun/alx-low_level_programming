#include "lists.h"

/**
 * sum_dlistint - sums all the elements in a double linked
 * list
 *
 * @head: the double linked list first element
 *
 * Return: the number of sum of the elements in the list
 *       or 0. if NULL
 */

int sum_dlistint(dlistint_t *head)
{
	long int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
