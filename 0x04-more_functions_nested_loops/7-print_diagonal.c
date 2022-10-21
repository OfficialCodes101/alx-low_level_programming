#include "main.h"

/**
 * print_diagonal - Fish
 * @n: catfish
 */
void print_diagonal(int n)
{
	int fish, cat;

	for (fish = 0; fish < n; fish++)
	{
		for (cat = 0; cat < fish; cat++)
		{
			_putchar(' ');
		}
		if (n <= 0)
		{
			putchar('\n');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
