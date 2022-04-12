#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return:0
 */

void print_alphabet_x10(void)

{
	char ch = 'a';
	int i = 0;

	while (i< 10)
	{
		while (ch <= 'a')
		{
		_putchar(ch);
		ch++;
		}
	}
	i++;
	_putchar('\n');

}
