#include <stdio.h>

/**
 * main - Entry point
 * Return: depressed
 */
int main(void)
{
	char gee = 'z';

	while (gee >= 'a')
	{
		putchar(gee);
		gee--;
	}
	putchar('\n');
	return (0);
}
