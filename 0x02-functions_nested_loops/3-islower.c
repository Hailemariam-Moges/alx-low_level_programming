#include "main.h"

/**
 * _islower - print 1 if lower otherwise 0.
 * @c: integer parameter c
 * Return:0
 */

int _islower(int c)
{
	int retvalue;



	if (c >= 'a' && c <= 'z')
	{
		retvalue = 1;

	}
	else
	{
		retvalue = 0;
	}

	return (retvalue);

}
