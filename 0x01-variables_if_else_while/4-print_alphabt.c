#include <stdio.h>

/**
 * main - Entry point
 * Return: ALX to the moon
 */
int main(void)
{
	char fish = 'a';

	for (fish = 'a'; fish <= 'z'; fish++)
	{
		if ((fish != 'q') && (fish != 'e'))
		{
			putchar(fish);
		}
	}

	putchar('\n');
	return (0);
}
