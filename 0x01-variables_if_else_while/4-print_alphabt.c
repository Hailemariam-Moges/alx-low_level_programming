#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return:0
 */

int main(void)

{

	char c = 'a';

	int i;

	for (i = 0; i < 26; i++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);


}
