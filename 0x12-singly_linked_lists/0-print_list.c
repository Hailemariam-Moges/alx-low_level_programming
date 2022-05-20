/*
 * File: 0-print_list.c
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @n: The list_t list.
 *
 * Return: The number of nodes in n.
 */

size_t print_list(const list_t *n)
{
	size_t nodes = 0;

	while (n)
	{
		if (n->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", n->len, n->str);

		nodes++;
		n = n->next;
	}

	return (nodes);
}
