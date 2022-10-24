#include "main.h"

/**
 * _puts - Printing a string
 * @str: Parameter
 */
void _puts(char *str)
{
	str = "Holberton!";
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
