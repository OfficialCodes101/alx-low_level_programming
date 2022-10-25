#include "main.h"

/**
 * print_array - fct
 * @a: pointer
 * @n: value
 */
void print_array(int *a, int n)
{
	int fish;

	for (fish = 0; fish < n; fish++)
	{
		if (fish == 0)
		{
			printf("%d", a[fish]);
		}
		else
		{
			printf(", %d", a[fish]);
		}
	}
	printf("\n");
}
