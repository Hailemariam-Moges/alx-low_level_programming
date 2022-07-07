#include "lists.h"

/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @h: The head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *tmp;

	while (h)
	{
		tmp = h->next;
		free(h);
		h = tmp;
	}
}
