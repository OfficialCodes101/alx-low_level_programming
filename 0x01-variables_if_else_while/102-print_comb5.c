#include <stdio.h>

/**
 * main - Entry point
 * Return: Wickedness takes people to hell
 */
int main(void)
{
	int c;
	int p;

	for (p = 0; p <= 99; p++)
	{
		for (c = p + 1; c <= 99; c++)
		{
			putchar(p / 10 + '0');
			putchar(p % 10 + '0');
			putchar(' ');
			putchar(c / 10 + '0');
			putchar(c % 10 + '0');

			if (p != 98 || c != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
