#include "lists.h"

/**
 * _dlistint_len - the number of elements in a linked list_t list
 *
 * @head: list to browse
 *
 * Return: size of the list
 */
size_t _dlistint_len(const dlistint_t *head)
{
	if (head == NULL)
		return (0);
	else
		return (_dlistint_len(head->next) + 1);
}

/**
 * _get_nodeint_at_index - the nth node of a listint_t linked list
 *
 * @h: first element
 * @index: element's number
 *
 * Return: a node
 */
dlistint_t *_get_nodeint_at_index(dlistint_t *h, unsigned int index)
{
	unsigned int iterate = 0;

	while (h != NULL)
	{
		if (index == iterate)
			return (h);
		h = h->next;
		iterate++;
	}

	return (NULL);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: first element
 * @idx: element's number
 * @n: number
 *
 * Return: he address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *before;
	int length;

	new = _createNode(n);

	if (h == NULL || new == NULL)
		return (NULL);

	length = _dlistint_len(*h);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (idx > (unsigned int) length)
	{
		return (NULL);
	}
	else
		before = _get_nodeint_at_index(*h, idx - 1);

	new->prev = before;
	new->next = before->next;

	if (before->next == NULL)
		return (add_dnodeint_end(h, n));
	before->next->prev = new;
	before->next = new;

	return (new);
}
