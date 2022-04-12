#include "main.h"

/**
 * print_last_digit - printing the last digit of a number
 * @n: integer parameter n
 * Return:0
 */

int print_last_digit(int n)
{
	int retvalue;

	if (n > 0)
	{
		retvalue = n % 10;
	}
	else
	{
		retvalue = (-1) * n % 10;
	}
	_putchar(retvalue + '0');

	return (retvalue);


}
