#include "lists.h"

/**
 * free_dlistint - Frees a listint_t list.
 *
 * @head: A pointer to the head of the listint_t list to be freed.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_1 = head->next, *tmp_2;


	while (tmp_1)
	{
		tmp_2 = tmp_1;
		tmp_1 = tmp_2->next;
		free(tmp_2);
	}
	free(head);
}
