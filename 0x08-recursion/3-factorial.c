#include "main.h"

/**
 * factorial - Find factorial of a given number
 * @n: Given number
 * Return: Varies
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
