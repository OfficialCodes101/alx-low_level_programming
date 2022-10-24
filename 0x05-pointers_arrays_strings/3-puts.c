#include "main.h"

/**
 * _puts - Printing a string
 * @str: Parameter
 */
void _puts(char *str)
{
	str = "I am handsome asf";
	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
	}
}
