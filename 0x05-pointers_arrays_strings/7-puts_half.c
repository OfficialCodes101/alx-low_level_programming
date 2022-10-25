#include "main.h"

/**
 * puts_half - fish
 * @str: manchi
 */
void puts_half(char *str)
{
	int wit;

	for (wit = 0; str[wit] != 0; wit++)
	{
	}
	wit++;
	for (wit /= 2; str[wit] != 0; wit++)
	{
		_putchar(str[wit]);
	}
	_putchar('\n');
}
