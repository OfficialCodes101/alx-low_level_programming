#include "main.h"

/**
 * rev_string - function
 * @s: parameter
 */
void rev_string(char *s)
{
	int a = strlen(s);
	int b;
	int temp;

	for (b = 0; b < a / 2; b++)
	{
		temp = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = temp;
	}
}
