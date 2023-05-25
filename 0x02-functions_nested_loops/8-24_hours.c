#include "main.h"

/**
 * jack_bauer - print every minute of a day
 * print minutes 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hours = 0;
	int min = 0;

	do {
		_putchar('0' + (hours / 10));
		_putchar('0' + (hours % 10));
		_putchar(':');
		_putchar('0' + (min / 10));
		_putchar('0' + (min % 10));
		_putchar('\n');

		min++;

		if (min == 60)
		{
			min = 0;
			hours++;
		}
	} while (hours < 24);
}
