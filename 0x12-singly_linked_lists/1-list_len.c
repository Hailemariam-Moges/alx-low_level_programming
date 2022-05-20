/*
 * File: 1-list_len.c
 */

#include "lists.h"

/**
 * list_len - Finds the number of elements in
 *            a linked list_t list.
 * @n: The linked list_t list.
 *
 * Return: The number of elements in n.
 */
size_t list_len(const list_t *n)
{
	size_t elements = 0;

	while (n)
	{
		elements++;
		n = n->next;
	}

	return (elements);
}
