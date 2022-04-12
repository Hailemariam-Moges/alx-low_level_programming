#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * printing the first 50 Fibonnanci numbers
 * Return:0
 */

int main(void)
{
	fn = 1;

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
