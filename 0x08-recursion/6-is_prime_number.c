#include "main.h"

/**
 * nf- nf
 * @a: Chee
 * @b: chee
 * Return: Idec
 */
int nf(int a, int b)
{
	if (a == 1)
		return (1);
	else if (b % a == 0)
		return (0);
	else
		return (nf(b, a - 1));
}

/**
 * is_prime_number - Perhaps
 * @n: para
 * Return: idec
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (nf(n, n - 1));
}
