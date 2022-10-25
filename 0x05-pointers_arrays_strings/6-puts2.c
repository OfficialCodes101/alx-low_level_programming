#include "main.h"

/**
 * puts2 - fish
 * @str: parameter
 */
void puts2(char *str)
{
	int a, len;

	for (len = 0; str[len] != 0; len++)
	{
	}
	for (a = 0; a < len; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
