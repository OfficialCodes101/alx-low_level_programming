#include "main.h"

/**
 * more_numbers - Entry
 * @void: Bas bish
 */
void more_numbers(void)
{
	char n, fish;

	for (fish = 0; fish <= 9; fish++)
	{
		for (n = 0, n <= 14; n++;)
		{
			if (n > 9)
			{
				_putchar(n / 10);
			}
			_putchar(n % 10);
		}
	}
	_putchar('\n');
}
