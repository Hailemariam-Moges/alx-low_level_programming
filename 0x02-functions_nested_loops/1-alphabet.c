#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;

	}
	_putchar('\n');

}

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();
	return (0);

}
