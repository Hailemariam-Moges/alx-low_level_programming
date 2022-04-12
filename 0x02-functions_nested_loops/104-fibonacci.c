#include <stdio.h>


/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long int a = 0, b = 1, next = 0;

	for (i = 0; i < 98; i++)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i != 97)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
