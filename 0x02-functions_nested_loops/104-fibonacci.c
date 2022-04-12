#include <stdio.h>


/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */

int main(void)
{
    int f1 = 0, f2 = 1, i, next;

    for (i = 1; i <=98; i++)
    {
	    printf("%ul", f2);
	    next = f1 + f2;
	    f1 = f2;
	    f2 = next;

	    if (i != 98)
	    {
		    printf(", ");
	    }
    }

}
