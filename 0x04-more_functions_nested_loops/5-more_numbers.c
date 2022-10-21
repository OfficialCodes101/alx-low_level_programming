#include "main.h"

/**
 * more_numbers - Entry
 * @void: Bas bish
 */
void more_numbers(void)
{
	char n, t;

	for (t = 0; t < 10; t++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
