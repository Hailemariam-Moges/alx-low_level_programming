#include "main.h"

/**
 * print_sign - printing the sign of a number n
 * @n: integer parameter n
 * Return: returns 1 and prints + if n is greater than zero,
 * returns 0 and prints 0 if n is zero,
 * returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	int retvalue;



	if (n > 0)
	{
		retvalue = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		retvalue = 0;
		_putchar('0');
	}
	else
	{
		retvalue = -1;
		_putchar('-');
	}

	return (retvalue);

}
