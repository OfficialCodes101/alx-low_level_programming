#include "main.h"

/**
 * _pow_recursion - To raise x to y
 * @x: raisee
 * @y: raiser
 * Return: varies
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x ^ y);
	}
}
