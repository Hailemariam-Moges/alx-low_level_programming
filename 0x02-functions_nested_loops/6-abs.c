#include "main.h"

/**
 * _abs - printing the absolute value of a number
 * @n: integer parameter n
 * Return:0
 */

int _abs(int n)

{
	int retvalue;

	if (n > 0)
	{
		retvalue = n;
	}
	else
	{
		n = (-1) * n;
	}

	return (retvalue);

}
