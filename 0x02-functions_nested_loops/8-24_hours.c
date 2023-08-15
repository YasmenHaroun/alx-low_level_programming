#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int min, hour;

	for (hour = '0'; hour < 24; hour++)
	{
		for (min = '0'; min < '60'; min++)
		{
			_putchar(min + '0');
			_putchar(':');
			_putchar(hour + '0');
			_putchar('\n');
		}
	}
}
