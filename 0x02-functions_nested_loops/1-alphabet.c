#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * @void: Na mumu dey disturb me like this
 */
void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
}

/**
 * main - Entry point
 * Return: 0 asf
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
