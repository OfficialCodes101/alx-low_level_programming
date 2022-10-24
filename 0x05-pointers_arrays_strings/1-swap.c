#include "main.h"

/**
 * swap_int - Swap 2 integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int fish;

	fish = *a;
	*a = *b;
	*b = fish;
}
