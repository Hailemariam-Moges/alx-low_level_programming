#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return:0
 */

void print_alphabet_x10(void)

{
	char ch = 'a', i;

	while (ch <= 'z')
	{
		i = 0;
		while (i < 10)
		{
		_putchar(ch);
		ch++;
		}
	}
	_putchar('\n');

	return (0);

}

/**
 * main - Entry point
 * Return:0
 */

int main(void)

{
	print_alphabet_x10();
	
}
