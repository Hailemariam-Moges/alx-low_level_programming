#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t nodes = 0;

	while (head)
	{
		nodes++;
		head = head->next;
	}

	return (nodes);
}
