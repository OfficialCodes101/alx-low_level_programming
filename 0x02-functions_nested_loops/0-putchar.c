#include <stdio.h>
void skrr(char *c);

/**
 * main - Entry point
 * Return: Eat my hammer
 */
int main(void)
{
	char c[] = "_putchar";

	skrr(c);
	putchar('\n');
	return (0);
}

/**
 * skrr - I dont even know
 * @c: Like I know
 */
void skrr(char *c)
{
	int i = 0;

	while  (c[i] != '\0')
	{
		putchar(c[i]);
		i++;
	}
}
