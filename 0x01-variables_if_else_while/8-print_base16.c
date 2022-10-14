#include <stdio.h>

/**
 * main - fish
 * Return: Bigger fish
 */
int main(void)
{
	int n = '0';
	char l = 'a';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	while (l <= 'f')
	{
		putchar(l);
		l++;
	}

	putchar('\n');
	return (0);
}
