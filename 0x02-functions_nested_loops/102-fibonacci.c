#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return:0
 */

int main(void)
{
	long fn = 1;

	while (fn < 50)
	{
		if (fn == 1)
		{
			printf("%i\n", fn);
		}
		else
		{
			fn = fn + 1;
			printf("%i\n", fn);
		}
		fn++;
		return (fn);
	}
}
