#include "main.h"

/**
 * _isalpha - prints 1 if it is letter, lowercase or uppercase.
 * @c: integer parameter c
 * Return:0
 */


int _isalpha(int c)
{
	int retvalue;



	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		retvalue = 1;
	}
	else
	{
		retvalue = 0;
	}

	return (retvalue);

}
