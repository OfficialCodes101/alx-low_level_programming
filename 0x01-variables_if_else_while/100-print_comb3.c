#include <stdio.h>

/**
 * main - Entry point
 * Return: Fish
 */
int main(void)
{
	int fish;
	int cat;

	for (cat = '0'; cat <= '9'; cat++)
	{
		for (fish = (cat + 1); fish <= '9'; fish++)
		{
			putchar(cat);
			putchar(fish);

			if (cat != '8' || fish != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
