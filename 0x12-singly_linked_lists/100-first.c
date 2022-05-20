/*
 * File: 100-first.c
 */

#include <stdio.h>

void __attribute__((constructor)) hare_nature(void);

/**
 * hare_nature - Prints a string before the
 *        main function is executed.
 */
void hare_nature(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
