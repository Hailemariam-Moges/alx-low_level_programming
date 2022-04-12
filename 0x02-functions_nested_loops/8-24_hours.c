#include "main.h"

/**
 * jack_bauer - printing time
 * Return:0
 */

void jack_bauer(void)
{


	int hr, min;

	hr = 0;

	while (hr >= 0 || hr < 24)
	{
		min = 0;

		while (min >= 0 || min < 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar(':');
			_putchar((hr / 10) + '0');
			_putchar((min % 10) + '0');
		}
		min++;
	}
	hr++;

	_putchar('\n');

}
