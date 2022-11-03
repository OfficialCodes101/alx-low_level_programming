#include "main.h"

/**
 * root - My function
 * @cat: for tet
 * @fish: test
 * Return: Real number
 */
int root(int cat, int fish)
{
	if (fish * fish > cat)
		return (-1);

	if (fish * fish == cat)
		return (fish);

	return (root(cat, fish + 1));
}

/**
 * _sqrt_recursion - Squaring a number
 * @n: parameter
 * Return: Chee
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (root(n, 0));
}
