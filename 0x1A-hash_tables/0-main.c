#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *htable;

	htable = hash_table_create(1024);
	printf("%p\n", (void *)htable);
	return (EXIT_SUCCESS);
}