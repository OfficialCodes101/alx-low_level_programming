#include "main.h"

/**
 * _puts - Printing a string
 * @str: Parameter
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
