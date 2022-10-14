#include <stdio.h>

/**
 * main - Entry point
 * Return: I hate u guys
 */
int main(void)
{
	char fred = 'a';
	char swaniker = 'A';

	while (fred <= 'z')
	{
		putchar(fred);
		fred++;
	}
	
	while (swaniker <= 'Z')
	{
		putchar(swaniker);
		swaniker++;
	}

	putchar('\n');
	return (0);
}
