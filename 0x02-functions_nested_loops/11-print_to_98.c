#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from 1 to 98
 * @n: integer parameter n
 * Return:0
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n > 98)
			{
				printf("%d, ", n);
				n--;
			}
			else if (n == 98)
			{
				printf("%d", n);
				break;
			}
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 98)
			{
				printf("%d, ", n);
				n++;
			}
			else if (n == 98)
			{
				printf("%d", n);
				break;
			}
		}
	}
	else
	{
		printf("%d", n);
	}
	putchar('\n');
}
