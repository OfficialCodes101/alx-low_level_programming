#include <stdio.h>

void print_alphabet(void);

/**
 * main - Entry point
 * Return: 0 asf
 */
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}

/**
 * print_alphabet - Una papa
 * @void: Commot here
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
}
