#include "main.h"

/**
 * print_line - Skrr
 * @n: ONG
 */
void print_line(int n)
{
	char i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
